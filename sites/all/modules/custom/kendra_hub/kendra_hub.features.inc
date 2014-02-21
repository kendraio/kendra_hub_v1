<?php
/**
 * @file
 * kendra_hub.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kendra_hub_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kendra_hub_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function kendra_hub_image_default_styles() {
  $styles = array();

  // Exported image style: tiny.
  $styles['tiny'] = array(
    'name' => 'tiny',
    'label' => 'Tiny',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function kendra_hub_node_info() {
  $items = array(
    'clip' => array(
      'name' => t('Clip'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Label'),
      'help' => '',
    ),
    'musicartist' => array(
      'name' => t('MusicArtist'),
      'base' => 'node_content',
      'description' => t('A person or a group of people (or a computer :-) ), whose musical creative work shows sensitivity and imagination.'),
      'has_title' => '1',
      'title_label' => t('Label'),
      'help' => '',
    ),
    'musicgroup' => array(
      'name' => t('MusicGroup'),
      'base' => 'node_content',
      'description' => t('Group of musicians, or musical ensemble, usually popular or folk, playing parts of or improvising off of a musical arrangement.'),
      'has_title' => '1',
      'title_label' => t('Label'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function kendra_hub_default_rules_link() {
  $items = array();
  $items['add_as_maker_of_clip'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Add as Maker",
      "link_type" : "token",
      "bundles" : { "musicartist" : "musicartist", "musicgroup" : "musicgroup" },
      "entity_link" : 0
    },
    "name" : "add_as_maker_of_clip",
    "label" : "Add as Maker of Clip",
    "path" : "add_as_maker_of_clip",
    "entity_type" : "node"
  }');
  $items['add_clip_as_subclip_of_clip'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Add as Subclip",
      "link_type" : "token",
      "bundles" : { "clip" : "clip" },
      "entity_link" : 0
    },
    "name" : "add_clip_as_subclip_of_clip",
    "label" : "Add Clip as Subclip of Clip",
    "path" : "add_clip_as_subclip_of_clip",
    "entity_type" : "node"
  }');
  $items['add_musicgroup_member'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Add Member",
      "link_type" : "token",
      "bundles" : { "musicartist" : "musicartist", "musicgroup" : "musicgroup" },
      "entity_link" : 0
    },
    "name" : "add_musicgroup_member",
    "label" : "Add MusicGroup Member",
    "path" : "add_musicgroup_member",
    "entity_type" : "node"
  }');
  $items['decrease_relation_weight'] = entity_import('rules_link', '{
    "settings" : { "text" : "-", "link_type" : "token", "bundles" : [], "entity_link" : 1 },
    "name" : "decrease_relation_weight",
    "label" : "Decrease relation weight",
    "path" : "decrease_relation_weight",
    "entity_type" : "relation"
  }');
  $items['increase_relation_weight'] = entity_import('rules_link', '{
    "settings" : { "text" : "+", "link_type" : "token", "bundles" : [], "entity_link" : 1 },
    "name" : "increase_relation_weight",
    "label" : "Increase relation weight",
    "path" : "increase_relation_weight",
    "entity_type" : "relation"
  }');
  return $items;
}
