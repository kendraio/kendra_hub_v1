<?php


function hubclip_css_alter(&$css) {
  unset($css[drupal_get_path('module', 'system') . '/system.messages.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.base.css']);
}

function hubclip_preprocess_page(&$vars) {
  $left_menu = menu_navigation_links('main-menu');
  $right_menu = menu_navigation_links('user-menu');

  $vars['topbar_left'] = theme('links', array(
    'links' => $left_menu,
  ));
  $vars['topbar_right'] = theme('links', array(
    'links' => $right_menu,
    'attributes' => array('class' => array('right')),
  ));
}

/*

<?php print theme('links', array('links' => ))


 <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Main menu'))); ?>
<?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Secondary menu'))); ?>

*/

function hubclip_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  $status_map = array(
    'status' => 'info',
    'warning' => 'warning',
    'error' => 'alert',
  );

  foreach (drupal_get_messages($display) as $type => $messages) {

    $output .= "<div data-alert class=\"alert-box {$status_map[$type]} radius\">\n";

    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }

    $output .= "<a href=\"#\" class=\"close\">&times;</a></div>\n";

  }
  return $output;
}
