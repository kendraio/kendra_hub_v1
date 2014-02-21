<?php
/**
 * @file
 * kendra_hub.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kendra_hub_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'add_clip_as_subclip_of_clip';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add Clip as Subclip of Clip';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Select Clip to add as Subclip';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Add Clip as Subclip of Clip */
  $handler->display->display_options['fields']['add_clip_as_subclip_of_clip']['id'] = 'add_clip_as_subclip_of_clip';
  $handler->display->display_options['fields']['add_clip_as_subclip_of_clip']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['add_clip_as_subclip_of_clip']['field'] = 'add_clip_as_subclip_of_clip';
  $handler->display->display_options['fields']['add_clip_as_subclip_of_clip']['label'] = '';
  $handler->display->display_options['fields']['add_clip_as_subclip_of_clip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_clip_as_subclip_of_clip']['rules_link'] = array(
    'rules_link_parameters' => '!1',
    'rules_link_rewrite' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clip' => 'clip',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['add_clip_as_subclip_of_clip'] = $view;

  $view = new view();
  $view->name = 'add_entity_as_maker_of_clip';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add Entity as Maker of Clip';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Add as Maker of Clip */
  $handler->display->display_options['fields']['add_as_maker_of_clip']['id'] = 'add_as_maker_of_clip';
  $handler->display->display_options['fields']['add_as_maker_of_clip']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['add_as_maker_of_clip']['field'] = 'add_as_maker_of_clip';
  $handler->display->display_options['fields']['add_as_maker_of_clip']['label'] = '';
  $handler->display->display_options['fields']['add_as_maker_of_clip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_as_maker_of_clip']['rules_link'] = array(
    'rules_link_parameters' => '!1',
    'rules_link_rewrite' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'musicartist' => 'musicartist',
    'musicgroup' => 'musicgroup',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['add_entity_as_maker_of_clip'] = $view;

  $view = new view();
  $view->name = 'add_member_to_musicgroup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add Member to MusicGroup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: member of (node → node) */
  $handler->display->display_options['relationships']['relation_member_of_node']['id'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_member_of_node']['field'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['label'] = 'Member of';
  $handler->display->display_options['relationships']['relation_member_of_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Add MusicGroup Member */
  $handler->display->display_options['fields']['add_musicgroup_member']['id'] = 'add_musicgroup_member';
  $handler->display->display_options['fields']['add_musicgroup_member']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['add_musicgroup_member']['field'] = 'add_musicgroup_member';
  $handler->display->display_options['fields']['add_musicgroup_member']['label'] = '';
  $handler->display->display_options['fields']['add_musicgroup_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_musicgroup_member']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['add_musicgroup_member']['rules_link'] = array(
    'rules_link_parameters' => '!1',
    'rules_link_rewrite' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'musicartist' => 'musicartist',
    'musicgroup' => 'musicgroup',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['add_member_to_musicgroup'] = $view;

  $view = new view();
  $view->name = 'aggregated_rights';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Aggregated rights';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'php_2' => 'php_2',
    'rendered_entity' => 'rendered_entity',
    'field_clip_use_start' => 'field_clip_use_start',
    'field_clip_use_end' => 'field_clip_use_end',
    'field_relation_weight' => 'field_relation_weight',
    'php_1' => 'php_1',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rendered_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clip_use_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clip_use_end' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_relation_weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Relation: Rendered Relation */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Entity';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'aggregate';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Relation: Use start */
  $handler->display->display_options['fields']['field_clip_use_start']['id'] = 'field_clip_use_start';
  $handler->display->display_options['fields']['field_clip_use_start']['table'] = 'field_data_field_clip_use_start';
  $handler->display->display_options['fields']['field_clip_use_start']['field'] = 'field_clip_use_start';
  $handler->display->display_options['fields']['field_clip_use_start']['label'] = 'Start';
  $handler->display->display_options['fields']['field_clip_use_start']['element_type'] = '0';
  $handler->display->display_options['fields']['field_clip_use_start']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_clip_use_start']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_clip_use_start']['empty'] = '0';
  $handler->display->display_options['fields']['field_clip_use_start']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_clip_use_start']['field_api_classes'] = TRUE;
  /* Field: Relation: Use end */
  $handler->display->display_options['fields']['field_clip_use_end']['id'] = 'field_clip_use_end';
  $handler->display->display_options['fields']['field_clip_use_end']['table'] = 'field_data_field_clip_use_end';
  $handler->display->display_options['fields']['field_clip_use_end']['field'] = 'field_clip_use_end';
  $handler->display->display_options['fields']['field_clip_use_end']['label'] = 'End';
  $handler->display->display_options['fields']['field_clip_use_end']['element_type'] = '0';
  $handler->display->display_options['fields']['field_clip_use_end']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_clip_use_end']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_clip_use_end']['empty'] = '100';
  $handler->display->display_options['fields']['field_clip_use_end']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_clip_use_end']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_clip_use_end']['field_api_classes'] = TRUE;
  /* Field: Relation: Decrease relation weight */
  $handler->display->display_options['fields']['decrease_relation_weight']['id'] = 'decrease_relation_weight';
  $handler->display->display_options['fields']['decrease_relation_weight']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['decrease_relation_weight']['field'] = 'decrease_relation_weight';
  $handler->display->display_options['fields']['decrease_relation_weight']['label'] = '';
  $handler->display->display_options['fields']['decrease_relation_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['decrease_relation_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['decrease_relation_weight']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Relation: Increase relation weight */
  $handler->display->display_options['fields']['increase_relation_weight']['id'] = 'increase_relation_weight';
  $handler->display->display_options['fields']['increase_relation_weight']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['increase_relation_weight']['field'] = 'increase_relation_weight';
  $handler->display->display_options['fields']['increase_relation_weight']['label'] = '';
  $handler->display->display_options['fields']['increase_relation_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['increase_relation_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['increase_relation_weight']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Relation: Weight */
  $handler->display->display_options['fields']['field_relation_weight']['id'] = 'field_relation_weight';
  $handler->display->display_options['fields']['field_relation_weight']['table'] = 'field_data_field_relation_weight';
  $handler->display->display_options['fields']['field_relation_weight']['field'] = 'field_relation_weight';
  $handler->display->display_options['fields']['field_relation_weight']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_relation_weight']['alter']['text'] = '[decrease_relation_weight] [field_relation_weight] [increase_relation_weight]';
  $handler->display->display_options['fields']['field_relation_weight']['element_type'] = '0';
  $handler->display->display_options['fields']['field_relation_weight']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_relation_weight']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_relation_weight']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_relation_weight']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'hover',
    'empty_text' => '',
    'fallback_format' => 'number_unformatted',
  );
  $handler->display->display_options['fields']['field_relation_weight']['field_api_classes'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Points';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return _hub_devel_aggregate_range_calc($row, $data, $static);';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Average points */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Average points';
  $handler->display->display_options['fields']['php']['label'] = 'Split';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return _hub_devel_aggregate_range_calc($row, $data, $static);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print _hub_devel_aggregate_range_calc_display($value, $data, $static); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  /* Filter criterion: Relation: endpoints (endpoints:r_index) */
  $handler->display->display_options['filters']['endpoints_r_index']['id'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['table'] = 'field_data_endpoints';
  $handler->display->display_options['filters']['endpoints_r_index']['field'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['value']['value'] = '1';
  $handler->display->display_options['filters']['endpoints_r_index']['group'] = 1;
  /* Filter criterion: Relation: Use end (field_clip_use_end) */
  $handler->display->display_options['filters']['field_clip_use_end_value']['id'] = 'field_clip_use_end_value';
  $handler->display->display_options['filters']['field_clip_use_end_value']['table'] = 'field_data_field_clip_use_end';
  $handler->display->display_options['filters']['field_clip_use_end_value']['field'] = 'field_clip_use_end_value';
  $handler->display->display_options['filters']['field_clip_use_end_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_clip_use_end_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_clip_use_end_value']['group'] = 2;
  $handler->display->display_options['filters']['field_clip_use_end_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clip_use_end_value']['expose']['operator_id'] = 'field_clip_use_end_value_op';
  $handler->display->display_options['filters']['field_clip_use_end_value']['expose']['label'] = 'Start';
  $handler->display->display_options['filters']['field_clip_use_end_value']['expose']['operator'] = 'field_clip_use_end_value_op';
  $handler->display->display_options['filters']['field_clip_use_end_value']['expose']['identifier'] = 't1';
  $handler->display->display_options['filters']['field_clip_use_end_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Relation: Use end (field_clip_use_end) */
  $handler->display->display_options['filters']['field_clip_use_end_value_1']['id'] = 'field_clip_use_end_value_1';
  $handler->display->display_options['filters']['field_clip_use_end_value_1']['table'] = 'field_data_field_clip_use_end';
  $handler->display->display_options['filters']['field_clip_use_end_value_1']['field'] = 'field_clip_use_end_value';
  $handler->display->display_options['filters']['field_clip_use_end_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_clip_use_end_value_1']['group'] = 2;
  /* Filter criterion: Relation: Use start (field_clip_use_start) */
  $handler->display->display_options['filters']['field_clip_use_start_value']['id'] = 'field_clip_use_start_value';
  $handler->display->display_options['filters']['field_clip_use_start_value']['table'] = 'field_data_field_clip_use_start';
  $handler->display->display_options['filters']['field_clip_use_start_value']['field'] = 'field_clip_use_start_value';
  $handler->display->display_options['filters']['field_clip_use_start_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_clip_use_start_value']['value']['value'] = '100';
  $handler->display->display_options['filters']['field_clip_use_start_value']['group'] = 3;
  $handler->display->display_options['filters']['field_clip_use_start_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clip_use_start_value']['expose']['operator_id'] = 'field_clip_use_start_value_op';
  $handler->display->display_options['filters']['field_clip_use_start_value']['expose']['label'] = 'End';
  $handler->display->display_options['filters']['field_clip_use_start_value']['expose']['operator'] = 'field_clip_use_start_value_op';
  $handler->display->display_options['filters']['field_clip_use_start_value']['expose']['identifier'] = 't2';
  $handler->display->display_options['filters']['field_clip_use_start_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_clip_use_start_value']['group_info']['label'] = 'Use start (field_clip_use_start)';
  $handler->display->display_options['filters']['field_clip_use_start_value']['group_info']['identifier'] = 'field_clip_use_start_value';
  $handler->display->display_options['filters']['field_clip_use_start_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_clip_use_start_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Relation: Use start (field_clip_use_start) */
  $handler->display->display_options['filters']['field_clip_use_start_value_1']['id'] = 'field_clip_use_start_value_1';
  $handler->display->display_options['filters']['field_clip_use_start_value_1']['table'] = 'field_data_field_clip_use_start';
  $handler->display->display_options['filters']['field_clip_use_start_value_1']['field'] = 'field_clip_use_start_value';
  $handler->display->display_options['filters']['field_clip_use_start_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_clip_use_start_value_1']['group'] = 3;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'endpoints_entity_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Relation: endpoints (endpoints:entity_id)',
    ),
  );
  $export['aggregated_rights'] = $view;

  $view = new view();
  $view->name = 'check_if_member_of_musicgroup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Check if Member of MusicGroup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: member of (node → node) */
  $handler->display->display_options['relationships']['relation_member_of_node']['id'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_member_of_node']['field'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['label'] = 'Member of';
  $handler->display->display_options['relationships']['relation_member_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_member_of_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_link_set_add_musicgroup_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'relation_member_of_node';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['check_if_member_of_musicgroup'] = $view;

  $view = new view();
  $view->name = 'clip_appears_on_relation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Clip appears on relation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Appears on...';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'appears_on';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'subclip_of' => 'subclip_of',
  );
  /* Filter criterion: Relation: endpoints (endpoints:r_index) */
  $handler->display->display_options['filters']['endpoints_r_index']['id'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['table'] = 'field_data_endpoints';
  $handler->display->display_options['filters']['endpoints_r_index']['field'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['value']['value'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'endpoints_entity_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Relation: endpoints (endpoints:entity_id)',
    ),
  );
  $export['clip_appears_on_relation'] = $view;

  $view = new view();
  $view->name = 'clip_maker_relations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Clip maker relations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'maker';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'maker_of' => 'maker_of',
  );
  /* Filter criterion: Relation: endpoints (endpoints:r_index) */
  $handler->display->display_options['filters']['endpoints_r_index']['id'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['table'] = 'field_data_endpoints';
  $handler->display->display_options['filters']['endpoints_r_index']['field'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'endpoints_entity_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Relation: endpoints (endpoints:entity_id)',
    ),
  );
  $export['clip_maker_relations'] = $view;

  $view = new view();
  $view->name = 'clip_subclips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clip Subclips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subclips';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Content: Relation: subclip of (node → node) */
  $handler->display->display_options['relationships']['relation_subclip_of_node']['id'] = 'relation_subclip_of_node';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['field'] = 'relation_subclip_of_node';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_subclip_of_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_subclip_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_subclip_of_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clip' => 'clip',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['clip_subclips'] = $view;

  $view = new view();
  $view->name = 'entity_memberof';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity MemberOf';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member of';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'tiny';
  /* Relationship: Content: Relation: member of (node → node) */
  $handler->display->display_options['relationships']['relation_member_of_node']['id'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_member_of_node']['field'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['label'] = 'Member of';
  $handler->display->display_options['relationships']['relation_member_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_member_of_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_member_of_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['entity_memberof'] = $view;

  $view = new view();
  $view->name = 'makers_of_cip';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Makers of Clip';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Makers';
  $handler->display->display_options['css_class'] = 'tiny-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tiny-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Content: Relation: maker of (node → node) */
  $handler->display->display_options['relationships']['relation_maker_of_node']['id'] = 'relation_maker_of_node';
  $handler->display->display_options['relationships']['relation_maker_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_maker_of_node']['field'] = 'relation_maker_of_node';
  $handler->display->display_options['relationships']['relation_maker_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_maker_of_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_maker_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_maker_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_maker_of_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entities that are Makers of Clip */
  $handler = $view->new_display('panel_pane', 'Entities that are Makers of Clip', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Clips made by Entity */
  $handler = $view->new_display('panel_pane', 'Clips made by Entity', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Maker of';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: maker of (node → node) */
  $handler->display->display_options['relationships']['relation_maker_of_node']['id'] = 'relation_maker_of_node';
  $handler->display->display_options['relationships']['relation_maker_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_maker_of_node']['field'] = 'relation_maker_of_node';
  $handler->display->display_options['relationships']['relation_maker_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_maker_of_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_maker_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_maker_of_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Makers of Clip (Tiny Version) */
  $handler = $view->new_display('panel_pane', 'Makers of Clip (Tiny Version)', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tiny-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'tiny';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['makers_of_cip'] = $view;

  $view = new view();
  $view->name = 'musicgroup_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MusicGroup list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'musicartist' => 'musicartist',
    'musicgroup' => 'musicgroup',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['musicgroup_list'] = $view;

  $view = new view();
  $view->name = 'musicgroup_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MusicGroup Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['css_class'] = 'tiny-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tiny-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'tiny';
  /* Relationship: Content: Relation: member of (node → node) */
  $handler->display->display_options['relationships']['relation_member_of_node']['id'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_member_of_node']['field'] = 'relation_member_of_node';
  $handler->display->display_options['relationships']['relation_member_of_node']['label'] = 'Member of';
  $handler->display->display_options['relationships']['relation_member_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_member_of_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_member_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_member_of_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['musicgroup_members'] = $view;

  $view = new view();
  $view->name = 'parent_clips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Parent clips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Appears in';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Content: Relation: subclip of (node → node) */
  $handler->display->display_options['relationships']['relation_subclip_of_node']['id'] = 'relation_subclip_of_node';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['field'] = 'relation_subclip_of_node';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_subclip_of_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_subclip_of_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_subclip_of_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_subclip_of_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clip' => 'clip',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['parent_clips'] = $view;

  $view = new view();
  $view->name = 'relation_graph';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Relation graph';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['thejit_spacetree']['selected_node'] = '';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'forcedirected',
    'fields' => array(
      'relation_type' => 'link:color',
      'nid' => '0',
      'nid_1' => '0',
      'nid_2' => '0',
      'expression' => 'from:id',
      'nid_3' => '0',
      'nid_4' => '0',
      'nid_5' => '0',
      'expression_1' => 'to:id',
      'title' => '0',
      'title_1' => '0',
      'title_2' => '0',
      'title_3' => '0',
      'title_4' => '0',
      'title_5' => '0',
      'nothing' => 'from:label',
      'nothing_1' => 'to:label',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '900';
  $handler->display->display_options['style_options']['graphapi']['height'] = '500';
  $handler->display->display_options['style_options']['graphapi']['background-color'] = '#ffffff';
  $handler->display->display_options['style_options']['thejit_forcedirected']['level_distance'] = '150';
  /* Relationship: Relation: Relation: maker of (relation → node) */
  $handler->display->display_options['relationships']['relation_base_maker_of_node']['id'] = 'relation_base_maker_of_node';
  $handler->display->display_options['relationships']['relation_base_maker_of_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_maker_of_node']['field'] = 'relation_base_maker_of_node';
  $handler->display->display_options['relationships']['relation_base_maker_of_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_maker_of_node']['entity_deduplication_right'] = 0;
  /* Relationship: Relation: Relation: member of (relation → node) */
  $handler->display->display_options['relationships']['relation_base_member_of_node']['id'] = 'relation_base_member_of_node';
  $handler->display->display_options['relationships']['relation_base_member_of_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_member_of_node']['field'] = 'relation_base_member_of_node';
  $handler->display->display_options['relationships']['relation_base_member_of_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_member_of_node']['entity_deduplication_right'] = 0;
  /* Relationship: Relation: Relation: subclip of (relation → node) */
  $handler->display->display_options['relationships']['relation_base_subclip_of_node']['id'] = 'relation_base_subclip_of_node';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node']['field'] = 'relation_base_subclip_of_node';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node']['entity_deduplication_right'] = 0;
  /* Relationship: Relation: Relation: maker of (relation → node) */
  $handler->display->display_options['relationships']['relation_base_maker_of_node_1']['id'] = 'relation_base_maker_of_node_1';
  $handler->display->display_options['relationships']['relation_base_maker_of_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_maker_of_node_1']['field'] = 'relation_base_maker_of_node';
  $handler->display->display_options['relationships']['relation_base_maker_of_node_1']['label'] = 'maker of target';
  $handler->display->display_options['relationships']['relation_base_maker_of_node_1']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_maker_of_node_1']['entity_deduplication_right'] = 0;
  /* Relationship: Relation: Relation: member of (relation → node) */
  $handler->display->display_options['relationships']['relation_base_member_of_node_1']['id'] = 'relation_base_member_of_node_1';
  $handler->display->display_options['relationships']['relation_base_member_of_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_member_of_node_1']['field'] = 'relation_base_member_of_node';
  $handler->display->display_options['relationships']['relation_base_member_of_node_1']['label'] = 'member of target';
  $handler->display->display_options['relationships']['relation_base_member_of_node_1']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_member_of_node_1']['entity_deduplication_right'] = 0;
  /* Relationship: Relation: Relation: subclip of (relation → node) */
  $handler->display->display_options['relationships']['relation_base_subclip_of_node_1']['id'] = 'relation_base_subclip_of_node_1';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node_1']['field'] = 'relation_base_subclip_of_node';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node_1']['label'] = 'subclip of target';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node_1']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_subclip_of_node_1']['entity_deduplication_right'] = 0;
  /* Field: Relation: Relation type */
  $handler->display->display_options['fields']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['fields']['relation_type']['table'] = 'relation';
  $handler->display->display_options['fields']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['fields']['relation_type']['label'] = '';
  $handler->display->display_options['fields']['relation_type']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'relation_base_maker_of_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'relation_base_member_of_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'relation_base_subclip_of_node';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Source */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Source';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[nid]+[nid_1]+[nid_2]';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['fields']['nid_3']['table'] = 'node';
  $handler->display->display_options['fields']['nid_3']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_3']['relationship'] = 'relation_base_maker_of_node_1';
  $handler->display->display_options['fields']['nid_3']['label'] = '';
  $handler->display->display_options['fields']['nid_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_3']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_4']['id'] = 'nid_4';
  $handler->display->display_options['fields']['nid_4']['table'] = 'node';
  $handler->display->display_options['fields']['nid_4']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_4']['relationship'] = 'relation_base_member_of_node_1';
  $handler->display->display_options['fields']['nid_4']['label'] = '';
  $handler->display->display_options['fields']['nid_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_4']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_5']['id'] = 'nid_5';
  $handler->display->display_options['fields']['nid_5']['table'] = 'node';
  $handler->display->display_options['fields']['nid_5']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_5']['relationship'] = 'relation_base_subclip_of_node_1';
  $handler->display->display_options['fields']['nid_5']['label'] = '';
  $handler->display->display_options['fields']['nid_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_5']['element_label_colon'] = FALSE;
  /* Field: Target */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'Target';
  $handler->display->display_options['fields']['expression_1']['label'] = '';
  $handler->display->display_options['fields']['expression_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['separator'] = '';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[nid_3]+[nid_4]+[nid_5]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_maker_of_node';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_member_of_node';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'relation_base_subclip_of_node';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'relation_base_maker_of_node_1';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'relation_base_member_of_node_1';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'relation_base_subclip_of_node_1';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['link_to_node'] = FALSE;
  /* Field: Source Label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Source Label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title][title_1][title_2]';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[expression]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Target Label */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Target Label';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title_3][title_4][title_5]';
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[expression_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['relation_graph'] = $view;

  $view = new view();
  $view->name = 'subclip_relations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Subclip relations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'subclip';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'subclip_of' => 'subclip_of',
  );
  /* Filter criterion: Relation: endpoints (endpoints:r_index) */
  $handler->display->display_options['filters']['endpoints_r_index']['id'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['table'] = 'field_data_endpoints';
  $handler->display->display_options['filters']['endpoints_r_index']['field'] = 'endpoints_r_index';
  $handler->display->display_options['filters']['endpoints_r_index']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'endpoints_entity_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Relation: endpoints (endpoints:entity_id)',
    ),
  );
  $export['subclip_relations'] = $view;

  $view = new view();
  $view->name = 'user_musicartists_and_musicgroups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User MusicArtists and MusicGroups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
  );
  $export['user_musicartists_and_musicgroups'] = $view;

  return $export;
}
