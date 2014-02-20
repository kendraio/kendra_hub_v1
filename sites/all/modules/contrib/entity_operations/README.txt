Entity Operations
=================

This module provides a framework for defining operations for entities. An operation is at its most basic 'something you can do with an entity'. Operations can be:
  - Page operations that return rendered output (such as 'view')
  - Form operations that output a form (such as 'edit')
  - Action operations, which may also have a form (such as 'publish')

Operations can be exposed as UI tabs, which allows the whole of an entity's UI to be created using Entity Operations. For example, a basic entity type's UI might have these operations, which come as part of Entity Operations module:
    - view: show the rendered entity at its basic URI.
    - edit: show the entity edit form.

Entity operations are also exposed in other ways:
  - Operations that are treated as actions are available to:
    - Views Bulk Operations as operations.
    - Services as targeted actions on entities (requires Services Entity
      module).
  - The link to an operation's tab is available as a Views field on the entity.
  - Operations that are forms can be output in a fieldset that can be shown on
    the entity (or indeed, anywhere).
  - If the Entity API admin UI is being used, the 'add', 'edit', and 'delete'
    operations can be shown there.

More complex entities can implement further operations specific to its business logic. For example, a library book entity could have a tab that allows making reservations. The operations framework allows modules to output any kind of content or form in an entity tab.

Access to an operation is defined by either the handler class, or the path component. entity_operations_get_entity_permissions() can be used to get all the permissions this invents for an entity type.

Implementation
==============

To implement basic entity operations for your entity type, add the following to your hook_entity_info():

  // Entity Operations API
  'operations ui' => array(
    // The base path for your entities. This is the same as your entity's URI
    // but without the ID suffix. (In fact, you can set
    // entity_operations_entity_uri() as your URI callback, which will use the
    // value here).
    'path' => 'node',
    'operations' => array(
      // The list of operations. The key defines the path component used after
      // the entity ID.
      // Creates the 'node/add' path.
      'add' => array(
        'handler' => 'EntityOperationsOperationAdd',
      ),
      // Creates the path at 'node/NID/view'. Also shows at 'node/NID' because
      // of the 'default' property.
      'view' => array(
        'handler' => 'EntityOperationsOperationEntityView',
        'default' => TRUE,
      ),
      // Creates the path at 'node/NID/edit'.
      'edit' => array(
        'handler' => 'EntityOperationsOperationEdit',
      ),
      // If devel module is available, creates the path at 'node/NID/devel'.
      'devel' => array(
        'handler' => 'EntityOperationsOperationDevel',
      ),
    ),
  ),
  // You also need the following Entity API properties:
  'module' => 'mymodule',
  'entity class' => 'Entity', // or a subclass of Entity
  'access callback' => 'myentity_access',
  'admin ui' => array(
    // The Add and Edit operations depend on the file path being defined here.
    'file path' => 'file/path/to/your/entity-form-callback',
  ),

See the documentation for entity_operations_hook_entity_info() for more details.




