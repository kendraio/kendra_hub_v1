<?php
/**
 * @file
 * kendra_hub.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function kendra_hub_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c996b071-5f5e-426f-a087-51e61ffbb81c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $display->content['new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd'] = $pane;
    $display->panels['middle'][0] = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'MusicGroup',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'musicgroup' => 'musicgroup',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4ed2d8de-4e2e-4d49-824e-30b33ca03974';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae2921fb-55e7-40cf-81d0-8d8fc94a54a1';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'header',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ae2921fb-55e7-40cf-81d0-8d8fc94a54a1';
    $display->content['new-ae2921fb-55e7-40cf-81d0-8d8fc94a54a1'] = $pane;
    $display->panels['middle'][0] = 'new-ae2921fb-55e7-40cf-81d0-8d8fc94a54a1';
    $pane = new stdClass();
    $pane->pid = 'new-de513732-b33e-41a1-8b7c-7aac4dc10512';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'musicgroup_members-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'de513732-b33e-41a1-8b7c-7aac4dc10512';
    $display->content['new-de513732-b33e-41a1-8b7c-7aac4dc10512'] = $pane;
    $display->panels['middle'][1] = 'new-de513732-b33e-41a1-8b7c-7aac4dc10512';
    $pane = new stdClass();
    $pane->pid = 'new-0d54f79a-e428-4ae1-aaab-c7ba1fad15b4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'entity_memberof-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d54f79a-e428-4ae1-aaab-c7ba1fad15b4';
    $display->content['new-0d54f79a-e428-4ae1-aaab-c7ba1fad15b4'] = $pane;
    $display->panels['middle'][2] = 'new-0d54f79a-e428-4ae1-aaab-c7ba1fad15b4';
    $pane = new stdClass();
    $pane->pid = 'new-d09579d3-c8c5-4037-9595-ab2e6a5d2260';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'makers_of_cip-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd09579d3-c8c5-4037-9595-ab2e6a5d2260';
    $display->content['new-d09579d3-c8c5-4037-9595-ab2e6a5d2260'] = $pane;
    $display->panels['middle'][3] = 'new-d09579d3-c8c5-4037-9595-ab2e6a5d2260';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ae2921fb-55e7-40cf-81d0-8d8fc94a54a1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'MusicArtist',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'musicartist' => 'musicartist',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c996b071-5f5e-426f-a087-51e61ffbb81c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $display->content['new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd'] = $pane;
    $display->panels['middle'][0] = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $pane = new stdClass();
    $pane->pid = 'new-51805088-6268-4b51-8ea6-348bb6270a7c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'entity_memberof-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51805088-6268-4b51-8ea6-348bb6270a7c';
    $display->content['new-51805088-6268-4b51-8ea6-348bb6270a7c'] = $pane;
    $display->panels['middle'][1] = 'new-51805088-6268-4b51-8ea6-348bb6270a7c';
    $pane = new stdClass();
    $pane->pid = 'new-cb72499c-6348-41a7-802f-f565c385fee1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'makers_of_cip-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cb72499c-6348-41a7-802f-f565c385fee1';
    $display->content['new-cb72499c-6348-41a7-802f-f565c385fee1'] = $pane;
    $display->panels['middle'][2] = 'new-cb72499c-6348-41a7-802f-f565c385fee1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Clip',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c996b071-5f5e-426f-a087-51e61ffbb81c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-49470138-baca-43b5-9607-645298615699';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'clip_maker_relations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '49470138-baca-43b5-9607-645298615699';
    $display->content['new-49470138-baca-43b5-9607-645298615699'] = $pane;
    $display->panels['middle'][0] = 'new-49470138-baca-43b5-9607-645298615699';
    $pane = new stdClass();
    $pane->pid = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $display->content['new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd'] = $pane;
    $display->panels['middle'][1] = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
    $pane = new stdClass();
    $pane->pid = 'new-ef3d558f-b5b3-425a-b3e8-1a58eb61446b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'makers_of_cip-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ef3d558f-b5b3-425a-b3e8-1a58eb61446b';
    $display->content['new-ef3d558f-b5b3-425a-b3e8-1a58eb61446b'] = $pane;
    $display->panels['middle'][2] = 'new-ef3d558f-b5b3-425a-b3e8-1a58eb61446b';
    $pane = new stdClass();
    $pane->pid = 'new-550855c0-8ec8-4ce8-87f9-14593c6ce994';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'clip_subclips-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '550855c0-8ec8-4ce8-87f9-14593c6ce994';
    $display->content['new-550855c0-8ec8-4ce8-87f9-14593c6ce994'] = $pane;
    $display->panels['middle'][3] = 'new-550855c0-8ec8-4ce8-87f9-14593c6ce994';
    $pane = new stdClass();
    $pane->pid = 'new-44360654-4205-4e0b-98c5-e1254bcbf4b8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'parent_clips-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '44360654-4205-4e0b-98c5-e1254bcbf4b8';
    $display->content['new-44360654-4205-4e0b-98c5-e1254bcbf4b8'] = $pane;
    $display->panels['middle'][4] = 'new-44360654-4205-4e0b-98c5-e1254bcbf4b8';
    $pane = new stdClass();
    $pane->pid = 'new-ef5db108-cd4f-4dac-bd4f-96213fc8d8de';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'subclip_relations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ef5db108-cd4f-4dac-bd4f-96213fc8d8de';
    $display->content['new-ef5db108-cd4f-4dac-bd4f-96213fc8d8de'] = $pane;
    $display->panels['middle'][5] = 'new-ef5db108-cd4f-4dac-bd4f-96213fc8d8de';
    $pane = new stdClass();
    $pane->pid = 'new-b9d25907-dc7b-479b-b7f4-e4311d414a2f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'aggregated_rights-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b9d25907-dc7b-479b-b7f4-e4311d414a2f';
    $display->content['new-b9d25907-dc7b-479b-b7f4-e4311d414a2f'] = $pane;
    $display->panels['middle'][6] = 'new-b9d25907-dc7b-479b-b7f4-e4311d414a2f';
    $pane = new stdClass();
    $pane->pid = 'new-b627e617-2e7d-4f29-96b0-3ba4102c30e7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'clip_appears_on_relation-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b627e617-2e7d-4f29-96b0-3ba4102c30e7';
    $display->content['new-b627e617-2e7d-4f29-96b0-3ba4102c30e7'] = $pane;
    $display->panels['middle'][7] = 'new-b627e617-2e7d-4f29-96b0-3ba4102c30e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41e3ad8e-37ca-464f-9f57-ffcf8d0076fd';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_node_overview_http_response';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'node_overview';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'front',
  );
  $export['pm_existing_pages_node_overview_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'hub_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'topbar' => NULL,
    ),
    'topbar' => array(
      'style' => 'naked',
    ),
    'main' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '96fe2f23-2677-42b4-a1f3-2b36dd1f1ecd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-733ccca3-f849-4b07-81b4-bc1db9016a8a';
    $pane->panel = 'header';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '733ccca3-f849-4b07-81b4-bc1db9016a8a';
    $display->content['new-733ccca3-f849-4b07-81b4-bc1db9016a8a'] = $pane;
    $display->panels['header'][0] = 'new-733ccca3-f849-4b07-81b4-bc1db9016a8a';
    $pane = new stdClass();
    $pane->pid = 'new-80f590ef-4fa0-4fab-b7ac-16b73ef70e98';
    $pane->panel = 'header';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '80f590ef-4fa0-4fab-b7ac-16b73ef70e98';
    $display->content['new-80f590ef-4fa0-4fab-b7ac-16b73ef70e98'] = $pane;
    $display->panels['header'][1] = 'new-80f590ef-4fa0-4fab-b7ac-16b73ef70e98';
    $pane = new stdClass();
    $pane->pid = 'new-c361950d-4b82-4bbf-9fa1-9d8e0aea89f1';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c361950d-4b82-4bbf-9fa1-9d8e0aea89f1';
    $display->content['new-c361950d-4b82-4bbf-9fa1-9d8e0aea89f1'] = $pane;
    $display->panels['main'][0] = 'new-c361950d-4b82-4bbf-9fa1-9d8e0aea89f1';
    $pane = new stdClass();
    $pane->pid = 'new-ca8041e5-f61d-422d-a4f3-8ad63987a9e0';
    $pane->panel = 'main';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca8041e5-f61d-422d-a4f3-8ad63987a9e0';
    $display->content['new-ca8041e5-f61d-422d-a4f3-8ad63987a9e0'] = $pane;
    $display->panels['main'][1] = 'new-ca8041e5-f61d-422d-a4f3-8ad63987a9e0';
    $pane = new stdClass();
    $pane->pid = 'new-950e5615-b9a3-4d45-87cd-ab4f0492becd';
    $pane->panel = 'main';
    $pane->type = 'page_actions';
    $pane->subtype = 'page_actions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '950e5615-b9a3-4d45-87cd-ab4f0492becd';
    $display->content['new-950e5615-b9a3-4d45-87cd-ab4f0492becd'] = $pane;
    $display->panels['main'][2] = 'new-950e5615-b9a3-4d45-87cd-ab4f0492becd';
    $pane = new stdClass();
    $pane->pid = 'new-12487cf3-c34e-4f1c-91da-63dd885fa70e';
    $pane->panel = 'main';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '12487cf3-c34e-4f1c-91da-63dd885fa70e';
    $display->content['new-12487cf3-c34e-4f1c-91da-63dd885fa70e'] = $pane;
    $display->panels['main'][3] = 'new-12487cf3-c34e-4f1c-91da-63dd885fa70e';
    $pane = new stdClass();
    $pane->pid = 'new-6e4a0498-d266-463c-a7b3-805f0c133c10';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6e4a0498-d266-463c-a7b3-805f0c133c10';
    $display->content['new-6e4a0498-d266-463c-a7b3-805f0c133c10'] = $pane;
    $display->panels['main'][4] = 'new-6e4a0498-d266-463c-a7b3-805f0c133c10';
    $pane = new stdClass();
    $pane->pid = 'new-8b6d9aef-1276-4e24-bffe-1e8f8b7b50f6';
    $pane->panel = 'topbar';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b6d9aef-1276-4e24-bffe-1e8f8b7b50f6';
    $display->content['new-8b6d9aef-1276-4e24-bffe-1e8f8b7b50f6'] = $pane;
    $display->panels['topbar'][0] = 'new-8b6d9aef-1276-4e24-bffe-1e8f8b7b50f6';
    $pane = new stdClass();
    $pane->pid = 'new-907a9930-41fa-445f-adce-e7771aac2321';
    $pane->panel = 'topbar';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'right',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '907a9930-41fa-445f-adce-e7771aac2321';
    $display->content['new-907a9930-41fa-445f-adce-e7771aac2321'] = $pane;
    $display->panels['topbar'][1] = 'new-907a9930-41fa-445f-adce-e7771aac2321';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e4a0498-d266-463c-a7b3-805f0c133c10';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'hub_full';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'main' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = '91284acc-1e8f-4293-954b-97027411dd35';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41e32b30-2a3f-4c7b-8a25-a2e290503930';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_musicartists_and_musicgroups-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e32b30-2a3f-4c7b-8a25-a2e290503930';
    $display->content['new-41e32b30-2a3f-4c7b-8a25-a2e290503930'] = $pane;
    $display->panels['main'][0] = 'new-41e32b30-2a3f-4c7b-8a25-a2e290503930';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41e32b30-2a3f-4c7b-8a25-a2e290503930';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function kendra_hub_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_new_clip_as_subclip';
  $page->task = 'page';
  $page->admin_title = 'Add new Clip as Subclip';
  $page->admin_description = '';
  $page->path = 'node/%node/add-subclip/new';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'clip' => 'clip',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add New Clip',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_new_clip_as_subclip_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_new_clip_as_subclip';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Redirect to add clip',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/clip?parent=%node:nid',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_new_clip_as_subclip'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'custom_add_clip';
  $page->task = 'page';
  $page->admin_title = 'Custom add: Clip';
  $page->admin_description = '';
  $page->path = 'user/%user/add-clip';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add Clip',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_custom_add_clip_http_response';
  $handler->task = 'page';
  $handler->subtask = 'custom_add_clip';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/clip',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['custom_add_clip'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'custom_add_musicartist';
  $page->task = 'page';
  $page->admin_title = 'Custom add: MusicArtist';
  $page->admin_description = '';
  $page->path = 'user/%user/add-artist';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add MusicArtist',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_custom_add_musicartist_http_response';
  $handler->task = 'page';
  $handler->subtask = 'custom_add_musicartist';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/musicartist',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['custom_add_musicartist'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'custom_add_musicgroup';
  $page->task = 'page';
  $page->admin_title = 'Custom add: MusicGroup';
  $page->admin_description = '';
  $page->path = 'user/%user/add-group';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add MusicGroup',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_custom_add_musicgroup_http_response';
  $handler->task = 'page';
  $handler->subtask = 'custom_add_musicgroup';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/musicgroup',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['custom_add_musicgroup'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Kendra Hub';
  $display->uuid = '3e5c9c0c-ece8-4388-9c11-320baa835a2d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc2cc846-fce7-4cf9-8631-56d2cfa0f896';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'musicgroup_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc2cc846-fce7-4cf9-8631-56d2cfa0f896';
    $display->content['new-bc2cc846-fce7-4cf9-8631-56d2cfa0f896'] = $pane;
    $display->panels['middle'][0] = 'new-bc2cc846-fce7-4cf9-8631-56d2cfa0f896';
    $pane = new stdClass();
    $pane->pid = 'new-25885e32-b2b8-4b7f-8a1d-49ebbbdabfd3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'relation_graph-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '25885e32-b2b8-4b7f-8a1d-49ebbbdabfd3';
    $display->content['new-25885e32-b2b8-4b7f-8a1d-49ebbbdabfd3'] = $pane;
    $display->panels['middle'][1] = 'new-25885e32-b2b8-4b7f-8a1d-49ebbbdabfd3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'select_entity_to_add_as_maker_of_clip';
  $page->task = 'page';
  $page->admin_title = 'Select Entity to add as Maker of Clip';
  $page->admin_description = '';
  $page->path = 'node/%node/add-maker';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'clip' => 'clip',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add Maker',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Clip',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_select_entity_to_add_as_maker_of_clip_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'select_entity_to_add_as_maker_of_clip';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Add Maker to %node:title';
  $display->uuid = '5c54ab56-a372-4fc4-b56d-263eab60eca7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95de5015-51c9-4a85-a49c-1ba83bdc5e0c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'add_entity_as_maker_of_clip-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95de5015-51c9-4a85-a49c-1ba83bdc5e0c';
    $display->content['new-95de5015-51c9-4a85-a49c-1ba83bdc5e0c'] = $pane;
    $display->panels['middle'][0] = 'new-95de5015-51c9-4a85-a49c-1ba83bdc5e0c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['select_entity_to_add_as_maker_of_clip'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'select_entity_to_add_as_subclip_of_clip';
  $page->task = 'page';
  $page->admin_title = 'Select Entity to add as Subclip of Clip';
  $page->admin_description = '';
  $page->path = 'node/%node/add-subclip';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'clip' => 'clip',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add Subclip',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Superclip',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_select_entity_to_add_as_subclip_of_clip_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'select_entity_to_add_as_subclip_of_clip';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'clip' => 'clip',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Add Subclip to %node:title';
  $display->uuid = '3f135411-01bb-4080-8e44-875b4aa3dde2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9dc50841-60de-420b-9ba0-1100835929e5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'add_clip_as_subclip_of_clip-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9dc50841-60de-420b-9ba0-1100835929e5';
    $display->content['new-9dc50841-60de-420b-9ba0-1100835929e5'] = $pane;
    $display->panels['middle'][0] = 'new-9dc50841-60de-420b-9ba0-1100835929e5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['select_entity_to_add_as_subclip_of_clip'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'select_entity_to_add_to_musicgroup';
  $page->task = 'page';
  $page->admin_title = 'Select Entity to add to MusicGroup';
  $page->admin_description = '';
  $page->path = 'node/%node/add-member';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'musicgroup' => 'musicgroup',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add Member',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'MusicGroup',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_select_entity_to_add_to_musicgroup_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'select_entity_to_add_to_musicgroup';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Add Member to %node:title';
  $display->uuid = '24b8fbb2-1c1b-419c-9320-4d8b1fc868ed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6e3011be-0013-41a3-b069-7db55dd0fffb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'add_member_to_musicgroup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e3011be-0013-41a3-b069-7db55dd0fffb';
    $display->content['new-6e3011be-0013-41a3-b069-7db55dd0fffb'] = $pane;
    $display->panels['middle'][0] = 'new-6e3011be-0013-41a3-b069-7db55dd0fffb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['select_entity_to_add_to_musicgroup'] = $page;

  return $pages;

}
