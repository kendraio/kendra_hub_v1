<?php
/**
 * @file
 * kendra_hub.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kendra_hub_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|clip|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'clip';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|clip|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|clip|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'clip';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|clip|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|musicartist|header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'musicartist';
  $ds_fieldsetting->view_mode = 'header';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|musicartist|header'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|musicartist|maker';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'musicartist';
  $ds_fieldsetting->view_mode = 'maker';
  $ds_fieldsetting->settings = array(
    'clip_maker_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'strong',
        'class' => '',
      ),
    ),
  );
  $export['node|musicartist|maker'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|musicartist|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'musicartist';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'strong',
        'class' => '',
      ),
    ),
  );
  $export['node|musicartist|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|musicgroup|header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'musicgroup';
  $ds_fieldsetting->view_mode = 'header';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|musicgroup|header'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|musicgroup|maker';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'musicgroup';
  $ds_fieldsetting->view_mode = 'maker';
  $ds_fieldsetting->settings = array(
    'clip_maker_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'strong',
        'class' => '',
      ),
    ),
  );
  $export['node|musicgroup|maker'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|musicgroup|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'musicgroup';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'strong',
        'class' => '',
      ),
    ),
  );
  $export['node|musicgroup|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'relation|maker_of|aggregate';
  $ds_fieldsetting->entity_type = 'relation';
  $ds_fieldsetting->bundle = 'maker_of';
  $ds_fieldsetting->view_mode = 'aggregate';
  $ds_fieldsetting->settings = array(
    'left_entity_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['relation|maker_of|aggregate'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'relation|maker_of|maker';
  $ds_fieldsetting->entity_type = 'relation';
  $ds_fieldsetting->bundle = 'maker_of';
  $ds_fieldsetting->view_mode = 'maker';
  $ds_fieldsetting->settings = array(
    'clip_maker' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['relation|maker_of|maker'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'relation|subclip_of|aggregate';
  $ds_fieldsetting->entity_type = 'relation';
  $ds_fieldsetting->bundle = 'subclip_of';
  $ds_fieldsetting->view_mode = 'aggregate';
  $ds_fieldsetting->settings = array(
    'left_entity_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['relation|subclip_of|aggregate'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'relation|subclip_of|appears_on';
  $ds_fieldsetting->entity_type = 'relation';
  $ds_fieldsetting->bundle = 'subclip_of';
  $ds_fieldsetting->view_mode = 'appears_on';
  $ds_fieldsetting->settings = array(
    'source_indicator' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['relation|subclip_of|appears_on'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'relation|subclip_of|subclip';
  $ds_fieldsetting->entity_type = 'relation';
  $ds_fieldsetting->bundle = 'subclip_of';
  $ds_fieldsetting->view_mode = 'subclip';
  $ds_fieldsetting->settings = array(
    'usage_indicator' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['relation|subclip_of|subclip'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kendra_hub_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'clip_maker';
  $ds_field->label = 'Clip maker';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'relation' => 'relation',
  );
  $ds_field->ui_limit = 'maker_of|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php print theme(\'clip_maker\', array(\'clip\' => $entity)); ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['clip_maker'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'clip_maker_type';
  $ds_field->label = 'Clip maker type';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|maker';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php if (!empty($entity->clip_maker_type)): ?>
  <?php print check_plain($entity->clip_maker_type->name); ?>
<?php endif; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['clip_maker_type'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'left_entity_title';
  $ds_field->label = 'Left entity title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'relation' => 'relation',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php $left = node_load($entity->endpoints[LANGUAGE_NONE][0][\'entity_id\']); ?>
<?php print check_plain($left->title); ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['left_entity_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'source_indicator';
  $ds_field->label = 'Source indicator';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'relation' => 'relation',
  );
  $ds_field->ui_limit = 'subclip_of|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php print _superclip_render($entity); ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['source_indicator'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'usage_indicator';
  $ds_field->label = 'Usage indicator';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'relation' => 'relation',
  );
  $ds_field->ui_limit = 'subclip_of|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php print _subclip_render($entity); ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['usage_indicator'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kendra_hub_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|clip|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'clip';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|clip|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|clip|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'clip';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-hub_track';
  $ds_layout->settings = array(
    'regions' => array(
      'title' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'title',
    ),
    'classes' => array(),
    'wrappers' => array(
      'title' => 'div',
      'makers' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|clip|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicartist|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicartist';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicartist|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicartist|header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicartist';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'panels-hub_header';
  $ds_layout->settings = array(
    'regions' => array(
      'img' => array(
        0 => 'field_artist_image',
      ),
      'text' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_artist_image' => 'img',
      'title' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'img' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicartist|header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicartist|maker';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicartist';
  $ds_layout->view_mode = 'maker';
  $ds_layout->layout = 'panels-hub_maker';
  $ds_layout->settings = array(
    'regions' => array(
      'img' => array(
        0 => 'field_artist_image',
      ),
      'text' => array(
        1 => 'title',
      ),
      'detail' => array(
        2 => 'clip_maker_type',
      ),
    ),
    'fields' => array(
      'field_artist_image' => 'img',
      'title' => 'text',
      'clip_maker_type' => 'detail',
    ),
    'classes' => array(),
    'wrappers' => array(
      'img' => 'div',
      'text' => 'div',
      'detail' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicartist|maker'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicartist|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicartist';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-hub_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'img' => array(
        0 => 'field_artist_image',
      ),
      'text' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_artist_image' => 'img',
      'title' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'img' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicartist|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicartist|tiny';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicartist';
  $ds_layout->view_mode = 'tiny';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_artist_image',
      ),
    ),
    'fields' => array(
      'field_artist_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicartist|tiny'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicgroup|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicgroup';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_group_image',
      ),
    ),
    'fields' => array(
      'field_group_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|musicgroup|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicgroup|header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicgroup';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'panels-hub_header';
  $ds_layout->settings = array(
    'regions' => array(
      'img' => array(
        0 => 'field_group_image',
      ),
      'text' => array(
        1 => 'title',
      ),
      'extra' => array(
        2 => 'field_group_members',
      ),
    ),
    'fields' => array(
      'field_group_image' => 'img',
      'title' => 'text',
      'field_group_members' => 'extra',
    ),
    'classes' => array(),
    'wrappers' => array(
      'img' => 'div',
      'text' => 'div',
      'extra' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicgroup|header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicgroup|maker';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicgroup';
  $ds_layout->view_mode = 'maker';
  $ds_layout->layout = 'panels-hub_maker';
  $ds_layout->settings = array(
    'regions' => array(
      'img' => array(
        0 => 'field_group_image',
      ),
      'text' => array(
        1 => 'title',
      ),
      'detail' => array(
        2 => 'clip_maker_type',
      ),
    ),
    'fields' => array(
      'field_group_image' => 'img',
      'title' => 'text',
      'clip_maker_type' => 'detail',
    ),
    'classes' => array(),
    'wrappers' => array(
      'img' => 'div',
      'text' => 'div',
      'detail' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicgroup|maker'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicgroup|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicgroup';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-hub_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'img' => array(
        0 => 'field_group_image',
      ),
      'text' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_group_image' => 'img',
      'title' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'img' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|musicgroup|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|musicgroup|tiny';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'musicgroup';
  $ds_layout->view_mode = 'tiny';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_group_image',
      ),
    ),
    'fields' => array(
      'field_group_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|musicgroup|tiny'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'relation|maker_of|aggregate';
  $ds_layout->entity_type = 'relation';
  $ds_layout->bundle = 'maker_of';
  $ds_layout->view_mode = 'aggregate';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'left_entity_title',
        1 => 'field_maker_type',
      ),
    ),
    'fields' => array(
      'left_entity_title' => 'ds_content',
      'field_maker_type' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['relation|maker_of|aggregate'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'relation|maker_of|maker';
  $ds_layout->entity_type = 'relation';
  $ds_layout->bundle = 'maker_of';
  $ds_layout->view_mode = 'maker';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'clip_maker',
      ),
    ),
    'fields' => array(
      'clip_maker' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['relation|maker_of|maker'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'relation|subclip_of|aggregate';
  $ds_layout->entity_type = 'relation';
  $ds_layout->bundle = 'subclip_of';
  $ds_layout->view_mode = 'aggregate';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'left_entity_title',
      ),
    ),
    'fields' => array(
      'left_entity_title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['relation|subclip_of|aggregate'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'relation|subclip_of|appears_on';
  $ds_layout->entity_type = 'relation';
  $ds_layout->bundle = 'subclip_of';
  $ds_layout->view_mode = 'appears_on';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'source_indicator',
      ),
    ),
    'fields' => array(
      'source_indicator' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['relation|subclip_of|appears_on'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'relation|subclip_of|subclip';
  $ds_layout->entity_type = 'relation';
  $ds_layout->bundle = 'subclip_of';
  $ds_layout->view_mode = 'subclip';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'usage_indicator',
      ),
    ),
    'fields' => array(
      'usage_indicator' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['relation|subclip_of|subclip'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kendra_hub_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'aggregate';
  $ds_view_mode->label = 'Aggregate';
  $ds_view_mode->entities = array(
    'relation' => 'relation',
  );
  $export['aggregate'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'appears_on';
  $ds_view_mode->label = 'Appears on';
  $ds_view_mode->entities = array(
    'relation' => 'relation',
  );
  $export['appears_on'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'header';
  $ds_view_mode->label = 'Header';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['header'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'maker';
  $ds_view_mode->label = 'Maker';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'relation' => 'relation',
  );
  $export['maker'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'subclip';
  $ds_view_mode->label = 'Subclip';
  $ds_view_mode->entities = array(
    'relation' => 'relation',
  );
  $export['subclip'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'tiny';
  $ds_view_mode->label = 'Tiny';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['tiny'] = $ds_view_mode;

  return $export;
}
