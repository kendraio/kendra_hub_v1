<?php $maker = node_load($clip->endpoints[LANGUAGE_NONE][0]['entity_id']);
if (!empty($clip->field_maker_type[LANGUAGE_NONE][0]['tid'])) {
  $maker->clip_maker_type = taxonomy_term_load($clip->field_maker_type[LANGUAGE_NONE][0]['tid']);
}
print drupal_render(node_view($maker, 'maker'));
?>
<?php // dpm($maker); ?>
<?php // dpm($clip); ?>
