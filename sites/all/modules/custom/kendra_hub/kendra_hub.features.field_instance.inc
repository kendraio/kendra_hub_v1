<?php
/**
 * @file
 * kendra_hub.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kendra_hub_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-clip-field_clip_makers'
  $field_instances['node-clip-field_clip_makers'] = array(
    'bundle' => 'clip',
    'default_value' => array(
      0 => array(
        'vname' => 'makers_of_cip|panel_pane_3',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_clip_makers',
    'label' => 'Makers',
    'required' => 1,
    'settings' => array(
      'allowed_views' => array(
        'add_clip_as_subclip_of_clip' => 0,
        'add_entity_as_maker_of_clip' => 0,
        'add_member_to_musicgroup' => 0,
        'check_if_member_of_musicgroup' => 0,
        'clip_subclips' => 0,
        'entity_memberof' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'makers_of_cip' => 'makers_of_cip',
        'message' => 0,
        'musicgroup_list' => 0,
        'musicgroup_members' => 0,
        'parent_clips' => 0,
        'rules_scheduler' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-clip-field_clip_url_slug'
  $field_instances['node-clip-field_clip_url_slug'] = array(
    'bundle' => 'clip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clip_url_slug',
    'label' => 'URL Slug',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'safeword',
      'settings' => array(),
      'type' => 'safeword_machine_name_only',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-musicartist-field_artist_image'
  $field_instances['node-musicartist-field_artist_image'] = array(
    'bundle' => 'musicartist',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'maker' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'tiny',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_artist_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 1,
      'file_directory' => 'artists/[current-user:uid]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-musicartist-field_artist_member_of'
  $field_instances['node-musicartist-field_artist_member_of'] = array(
    'bundle' => 'musicartist',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 9,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'maker' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_artist_member_of',
    'label' => 'Member of',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'member_of' => 'member_of',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-musicartist-field_artist_url_slug'
  $field_instances['node-musicartist-field_artist_url_slug'] = array(
    'bundle' => 'musicartist',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 10,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'maker' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_artist_url_slug',
    'label' => 'URL Slug',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'safeword',
      'settings' => array(),
      'type' => 'safeword_machine_name_only',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-musicgroup-field_group_image'
  $field_instances['node-musicgroup-field_group_image'] = array(
    'bundle' => 'musicgroup',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'maker' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'tiny',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_group_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 2,
      'file_directory' => 'groups/[current-user:uid]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-musicgroup-field_group_members'
  $field_instances['node-musicgroup-field_group_members'] = array(
    'bundle' => 'musicgroup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'relation_formatter_entity',
        'settings' => array(
          'field_collection_item' => array(
            'view_mode' => 'full',
          ),
          'file' => array(
            'view_mode' => NULL,
          ),
          'flagging' => array(
            'view_mode' => 'token',
          ),
          'message' => array(
            'view_mode' => 'full',
          ),
          'message_type' => array(
            'view_mode' => 'token',
          ),
          'message_type_category' => array(
            'view_mode' => 'token',
          ),
          'node' => array(
            'view_mode' => 'tiny',
          ),
          'profile2' => array(
            'view_mode' => 'account',
          ),
          'profile2_type' => array(
            'view_mode' => NULL,
          ),
          'relation' => array(
            'view_mode' => 'token',
          ),
          'respect_directional' => 0,
          'rules_config' => array(
            'view_mode' => 'token',
          ),
          'rules_link' => array(
            'view_mode' => 'token',
          ),
          'taxonomy_term' => array(
            'view_mode' => 'full',
          ),
          'taxonomy_vocabulary' => array(
            'view_mode' => NULL,
          ),
          'user' => array(
            'view_mode' => 'full',
          ),
          'view_mode' => 'default',
        ),
        'type' => 'relation_rendered',
        'weight' => 2,
      ),
      'maker' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_group_members',
    'label' => 'Members',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'member_of' => 'member_of',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-musicgroup-field_group_url_slug'
  $field_instances['node-musicgroup-field_group_url_slug'] = array(
    'bundle' => 'musicgroup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'maker' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_group_url_slug',
    'label' => 'URL Slug',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'safeword',
      'settings' => array(),
      'type' => 'safeword_machine_name_only',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Makers');
  t('Member of');
  t('Members');
  t('URL Slug');

  return $field_instances;
}
