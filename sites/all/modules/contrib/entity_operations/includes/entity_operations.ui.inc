<?php

/**
 * Admin UI controller class for entities using operations.
 *
 * This is optional, but tweaks Entity API's default admin UI to make it work
 * better with operations.
 */
class EntityOperationsDefaultAdminUIController extends EntityDefaultUIController {

  /**
   * Provides definitions for implementing hook_menu().
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    // Sigh... have to get this all over again.
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%entity_object';

    $operations = entity_operations_get_operation_info($this->entityType);

    // TODO: check for handlers rather than paths, since these can be custom.
    // However, the handler classes could be subclasses! And also we have two
    // classes of our own to check for 'add' and 'edit'.
    if (isset($operations['add'])) {
      // Remove the admin UI 'add' menu item, as this goes to the entity UI
      // form which might not be the one we use.
      // EntityOperations provides an 'add' operation on the entity base path.
      unset($items[$this->path . '/add']);

      // We rely on EntityOperationsOperationAdd and
      // EntityOperationsOperationAddGeneric setting their menu item to appear
      // as a local task on the admin base path.
    }

    if (isset($operations['edit'])) {
      unset($items[$this->path . '/manage/' . $wildcard]);
      unset($items[$this->path . '/manage/' . $wildcard . '/edit']);
    }

    // Delete uses a generic path which is also used by 'revert', so leave that.

    return $items;
  }

  /**
   * Generates the table headers for the overview table.
   */
  protected function overviewTableHeaders($conditions, $rows, $additional_header = array()) {
    // Before we hand over to the parent, create extra columns we might need.

    // Add a type column if this entity has more than one bundle.
    if (count($this->entityInfo['bundles'] > 1)) {
      $additional_header['type'] = t('Type');
    }

    $header = parent::overviewTableHeaders($conditions, $rows, $additional_header);

    return $header;
  }

  /**
   * Generates the row for the passed entity and may be overridden in order to
   * customize the rows.
   *
   * @param $additional_cols
   *   Additional columns to be added after the entity label column.
   */
  protected function overviewTableRow($conditions, $id, $entity, $additional_cols = array()) {
    // Before we hand over to the parent, create extra columns we might need.

    // Add a type column if this entity has more than one bundle.
    if (count($this->entityInfo['bundles'] > 1)) {
      list(, , $bundle) = entity_extract_ids($this->entityType, $entity);
      $additional_cols['type'] = $this->entityInfo['bundles'][$bundle]['label'];
    }

    $row = parent::overviewTableRow($conditions, $id, $entity, $additional_cols);

    // Figure out which columns have the 'edit' and 'delete' links so we can
    // doctor them if needed.
    static $operation_column_numbers;
    if (!isset($operation_column_numbers)) {
      foreach ($row as $index => $cell) {
        if ($index == 0) {
          // It's the entity label, which is not a string, so skip it.
          continue;
        }

        if (strpos($cell, '>edit<') !== FALSE) {
          $operation_column_numbers['edit'] = $index;
        }
        if (strpos($cell, '>delete<') !== FALSE) {
          $operation_column_numbers['delete'] = $index;
        }
      }
    }

    $operations = entity_operations_get_operation_info($this->entityType);

    $uri = $entity->uri();

    // TODO: check for handlers rather than paths, since these can be custom.
    if (isset($operations['edit'])) {
      // TODO: check for access -- though note that Entity API doesn't here.
      $row[$operation_column_numbers['edit']] = l('edit', $uri['path'] . '/edit');
    }
    if (isset($operations['delete'])) {
      $row[$operation_column_numbers['delete']] = l('delete', $uri['path'] . '/delete', array(
        'query' => drupal_get_destination(),
      ));
    }

    return $row;
  }

  /**
   * Slightly foreign helper for the 'add' operation handlers.
   *
   * Convert their menu item to appear as a local task on the admin UI.
   *
   * @param $item
   *  The menu item to alter, passed in by reference.
   */
  function menu_item_make_task(&$item) {
    $item['title'] = 'Add !type-label';
    $item['title arguments'] = array(
      '!type-label' => $this->entityInfo['label'],
    );
    $item['type'] = MENU_LOCAL_ACTION;
    // Set the tab root and parent to be the admin UI base path, to cause it
    // to appear as a local action there. This is of course a totally
    // different part of the menu router hierarchy, but works fine.
    // This is considerably better than using hook_menu_local_tasks_alter(),
    // which is called on every page load and in which, because we're generic,
    // we'd have to go inspecting every single entity type definition to see if
    // we're on its admin path.
    $item['tab_root'] = $this->entityInfo['admin ui']['path'];
    $item['tab_parent'] = $this->entityInfo['admin ui']['path'];
  }

}
