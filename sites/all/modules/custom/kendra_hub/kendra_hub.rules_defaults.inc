<?php
/**
 * @file
 * kendra_hub.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kendra_hub_default_rules_configuration() {
  $items = array();
  $items['rules_create_parent_clip_relation_from_stored_value'] = entity_import('rules_config', '{ "rules_create_parent_clip_relation_from_stored_value" : {
      "LABEL" : "Create parent clip relation from stored value",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_session_vars", "rules" ],
      "ON" : { "node_insert--clip" : { "bundle" : "clip" } },
      "IF" : [ { "session_key_exists" : { "data_key" : "hub_parent_clip_nid" } } ],
      "DO" : [
        { "load_data_from_session" : {
            "USING" : { "data_key" : "hub_parent_clip_nid" },
            "PROVIDE" : { "loaded_session_data" : { "loaded_session_data" : "Loaded session data." } }
          }
        },
        { "remove_data_from_session" : { "data_key" : "hub_parent_clip_nid" } },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "loaded-session-data" ] },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "conversion-result" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "component_rules_execute_clip_add_to_parent_clip" : { "clip" : [ "node" ], "parent" : [ "entity-fetched" ] } }
      ]
    }
  }');
  $items['rules_execute_clip_add_to_parent_clip'] = entity_import('rules_config', '{ "rules_execute_clip_add_to_parent_clip" : {
      "LABEL" : "Execute clip add to parent clip",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "clip" : { "label" : "clip", "type" : "node" },
        "parent" : { "label" : "parent", "type" : "node" }
      },
      "IF" : [
        { "component_rules_link_condition_add_clip_as_subclip_of_clip" : { "node" : [ "clip" ], "superclip" : [ "parent" ] } }
      ],
      "DO" : [
        { "component_rules_link_set_add_clip_as_subclip_of_clip" : { "node" : [ "clip" ], "superclip" : [ "parent" ] } }
      ]
    }
  }');
  $items['rules_link_condition_add_as_maker_of_clip'] = entity_import('rules_config', '{ "rules_link_condition_add_as_maker_of_clip" : {
      "LABEL" : "Rules link: Add as Maker of Clip condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "node", "type" : "node" },
        "clip" : { "label" : "clip", "type" : "node" }
      },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "musicartist" : "musicartist", "musicgroup" : "musicgroup" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "clip" ],
            "type" : "node",
            "bundle" : { "value" : { "clip" : "clip" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_add_clip_as_subclip_of_clip'] = entity_import('rules_config', '{ "rules_link_condition_add_clip_as_subclip_of_clip" : {
      "LABEL" : "Rules link: Add Clip as Subclip of Clip condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "node", "type" : "node" },
        "superclip" : { "label" : "superclip", "type" : "node" }
      },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "clip" : "clip" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "superclip" ],
            "type" : "node",
            "bundle" : { "value" : { "clip" : "clip" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_add_musicgroup_member'] = entity_import('rules_config', '{ "rules_link_condition_add_musicgroup_member" : {
      "LABEL" : "Rules link: Add MusicGroup Member condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_bulk_operations" ],
      "USES VARIABLES" : {
        "node" : { "label" : "node", "type" : "node" },
        "member" : { "label" : "member", "type" : "node" }
      },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "musicartist" : "musicartist", "musicgroup" : "musicgroup" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "member" ],
            "type" : "node",
            "bundle" : { "value" : { "musicgroup" : "musicgroup" } }
          }
        },
        { "NOT views_bulk_operations_condition_result_count" : {
            "view" : "check_if_member_of_musicgroup|default",
            "args" : "[node:nid]\\r\\n[member:nid]",
            "minimum" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_decrease_relation_weight'] = entity_import('rules_config', '{ "rules_link_condition_decrease_relation_weight" : {
      "LABEL" : "Rules link: Decrease relation weight condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "label" : "relation", "type" : "relation" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "relation" ], "field" : "field_relation_weight" } }
      ]
    }
  }');
  $items['rules_link_condition_increase_relation_weight'] = entity_import('rules_config', '{ "rules_link_condition_increase_relation_weight" : {
      "LABEL" : "Rules link: Increase relation weight condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "relation" ], "field" : "field_relation_weight" } }
      ]
    }
  }');
  $items['rules_link_set_add_as_maker_of_clip'] = entity_import('rules_config', '{ "rules_link_set_add_as_maker_of_clip" : {
      "LABEL" : "Rules link: Add as Maker of Clip rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "type" : "node", "label" : "node" },
        "clip" : { "label" : "clip", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "variable_added" : "Added variable" },
              "entity_created" : { "entity_created" : "Created entity" }
            },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                  "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
                }
              },
              { "list_add" : { "list" : [ "variable-added" ], "item" : [ "node" ] } },
              { "list_add" : { "list" : [ "variable-added" ], "item" : [ "clip" ] } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "relation",
                    "param_relation_type" : "maker_of",
                    "param_endpoints" : [ "variable-added" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
              { "drupal_message" : { "message" : "Added [node:title] as a maker of [clip:title]" } },
              { "redirect" : { "url" : "relation\\/[entity-created:rid]\\/edit?destination=clip\\/[clip:nid]" } }
            ],
            "LABEL" : "Add Entity as Maker of Clip"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_add_clip_as_subclip_of_clip'] = entity_import('rules_config', '{ "rules_link_set_add_clip_as_subclip_of_clip" : {
      "LABEL" : "Rules link: Add Clip as Subclip of Clip rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "type" : "node", "label" : "node" },
        "superclip" : { "label" : "superclip", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "variable_added" : "Added variable" },
              "entity_created" : { "entity_created" : "Created entity" }
            },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                  "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
                }
              },
              { "list_add" : { "list" : [ "variable-added" ], "item" : [ "node" ] } },
              { "list_add" : { "list" : [ "variable-added" ], "item" : [ "superclip" ] } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "relation",
                    "param_relation_type" : "subclip_of",
                    "param_endpoints" : [ "variable-added" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
              { "drupal_message" : { "message" : "Added [node:title] as Subclip of [superclip:title]" } },
              { "redirect" : { "url" : "relation\\/[entity-created:rid]\\/edit?destination=clip\\/[superclip:nid]" } }
            ],
            "LABEL" : "Add Clip as Subclip of Clip"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_add_musicgroup_member'] = entity_import('rules_config', '{ "rules_link_set_add_musicgroup_member" : {
      "LABEL" : "Rules link: Add MusicGroup Member rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "type" : "node", "label" : "node" },
        "member" : { "label" : "member", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "variable_added" : "Added variable" },
              "entity_created" : { "entity_created" : "Created entity" }
            },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                  "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
                }
              },
              { "list_add" : { "list" : [ "variable-added" ], "item" : [ "node" ] } },
              { "list_add" : { "list" : [ "variable-added" ], "item" : [ "member" ] } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "relation",
                    "param_relation_type" : "member_of",
                    "param_endpoints" : [ "variable-added" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "drupal_message" : { "message" : "Added [node:title] to [member:title]" } },
              { "redirect" : { "url" : [ "member:url" ] } }
            ],
            "LABEL" : "Add MusicGroup Member"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_decrease_relation_weight'] = entity_import('rules_config', '{ "rules_link_set_decrease_relation_weight" : {
      "LABEL" : "Rules link: Decrease relation weight rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "label" : "relation", "type" : "relation" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "result" : { "result" : "Calculation result" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "relation" ], "field" : "field_relation_weight" } },
              { "data_is" : {
                  "data" : [ "relation:field-relation-weight" ],
                  "op" : "\\u003E",
                  "value" : "0"
                }
              }
            ],
            "DO" : [
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "relation:field-relation-weight" ],
                    "op" : "-",
                    "input_2" : "1"
                  },
                  "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                }
              },
              { "data_set" : { "data" : [ "relation:field-relation-weight" ], "value" : [ "result" ] } }
            ],
            "LABEL" : "Decrease relation weight"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_increase_relation_weight'] = entity_import('rules_config', '{ "rules_link_set_increase_relation_weight" : {
      "LABEL" : "Rules link: Increase relation weight rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "result" : { "result" : "Calculation result" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "relation" ], "field" : "field_relation_weight" } }
            ],
            "DO" : [
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "relation:field-relation-weight" ],
                    "op" : "+",
                    "input_2" : "1"
                  },
                  "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                }
              },
              { "data_set" : { "data" : [ "relation:field-relation-weight" ], "value" : [ "result" ] } }
            ],
            "LABEL" : "Increase relation weight"
          }
        }
      ]
    }
  }');
  $items['rules_store_parent_clip_id_in_session'] = entity_import('rules_config', '{ "rules_store_parent_clip_id_in_session" : {
      "LABEL" : "Store parent clip ID in session",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_url_argument", "rules_session_vars", "rules_forms" ],
      "ON" : { "rules_forms_clip_node_form_form_built" : [] },
      "IF" : [ { "rules_url_argument_argument_exists" : { "argument" : "parent" } } ],
      "DO" : [
        { "rules_url_argument_rules_action_get_argument_from_url" : {
            "USING" : { "type" : "text", "argument_name" : "parent" },
            "PROVIDE" : { "argument_from_url" : { "argument_from_url" : "Argument from URL" } }
          }
        },
        { "add_data_to_session" : {
            "data_key" : "hub_parent_clip_nid",
            "data_value" : [ "argument-from-url" ]
          }
        }
      ]
    }
  }');
  $items['rules_update_relation_id_fields'] = entity_import('rules_config', '{ "rules_update_relation_id_fields" : {
      "LABEL" : "Update relation ID fields",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "label" : "relation", "type" : "relation" } },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "relation:endpoints:0" ] } },
        { "NOT data_is_empty" : { "data" : [ "relation:endpoints:1" ] } },
        { "entity_has_field" : { "entity" : [ "relation" ], "field" : "field_relation_left_id" } },
        { "entity_has_field" : { "entity" : [ "relation" ], "field" : "field_relation_right_id" } },
        { "entity_is_of_type" : { "entity" : [ "relation:endpoints:0" ], "type" : "node" } },
        { "entity_is_of_type" : { "entity" : [ "relation:endpoints:1" ], "type" : "node" } }
      ],
      "DO" : []
    }
  }');
  return $items;
}
