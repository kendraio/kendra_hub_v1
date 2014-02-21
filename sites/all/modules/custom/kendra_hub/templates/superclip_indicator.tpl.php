<?php

$use_start = $clip->field_clip_use_start[LANGUAGE_NONE][0]['value'];
$use_end = $clip->field_clip_use_end[LANGUAGE_NONE][0]['value'];
$source_start = $clip->field_clip_source_start[LANGUAGE_NONE][0]['value'];
$source_end = $clip->field_clip_source_end[LANGUAGE_NONE][0]['value'];

$subclip_style = 'margin: 0 ' . (100 - intval($use_end)) . '% 0 ' . intval($use_start) . '%;';
$subclip_style2 = 'margin: 0 ' . (100 - intval($source_end)) . '% 0 ' . intval($source_start) . '%;';

$subclip = node_load($clip->endpoints[LANGUAGE_NONE][1]['entity_id']);
$superclip = node_load($clip->endpoints[LANGUAGE_NONE][0]['entity_id']);

//$one = "width: 0; height: 0; border-top: 1em solid transparent; border-right: {$use_start}px solid blue";
?>

<div class="subclip-wrapper">
  <div class="subclip-usage" style="<?php print $subclip_style2; ?>">
    <?php print check_plain($superclip->title); //print l($superclip->title, 'node/' . $superclip->nid); ?>
  </div>
</div>
<div class="superclip-wrapper">
  &nbsp;
  <?php print l($subclip->title, 'node/' . $subclip->nid); ?>
  <div class="superclip-usage">
    <div style="<?php print $subclip_style; ?>">&nbsp;<?php // print check_plain($superclip->title); ?></div>
  </div>
</div>

<?php

//dpm(get_defined_vars());
?>
