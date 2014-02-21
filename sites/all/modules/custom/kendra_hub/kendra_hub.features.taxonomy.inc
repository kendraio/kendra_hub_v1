<?php
/**
 * @file
 * kendra_hub.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function kendra_hub_taxonomy_default_vocabularies() {
  return array(
    'maker_relationship_types' => array(
      'name' => 'Maker relationship types',
      'machine_name' => 'maker_relationship_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
