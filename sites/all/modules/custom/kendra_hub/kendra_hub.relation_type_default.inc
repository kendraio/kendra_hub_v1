<?php
/**
 * @file
 * kendra_hub.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function kendra_hub_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'maker_of';
  $relation_type->label = 'maker of';
  $relation_type->reverse_label = 'made by';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:musicartist',
    1 => 'node:musicgroup',
  );
  $relation_type->target_bundles = array(
    0 => 'node:clip',
  );
  $export['maker_of'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'member_of';
  $relation_type->label = 'member of';
  $relation_type->reverse_label = 'Member';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:musicartist',
    1 => 'node:musicgroup',
  );
  $relation_type->target_bundles = array(
    0 => 'node:musicgroup',
  );
  $export['member_of'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'subclip_of';
  $relation_type->label = 'subclip of';
  $relation_type->reverse_label = 'superclip of';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:clip',
  );
  $relation_type->target_bundles = array(
    0 => 'node:clip',
  );
  $export['subclip_of'] = $relation_type;

  return $export;
}
