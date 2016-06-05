<?php
/**
 * @file
 * heyrental_setup.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function heyrental_setup_default_rules_configuration() {
  $items = array();
  $items['rules_heyrental_outgoing'] = entity_import('rules_config', '{ "rules_heyrental_outgoing" : {
      "LABEL" : "heyrental outgoing",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "twilio", "rules" ],
      "ON" : { "node_insert--message" : { "bundle" : "message" } },
      "DO" : [
        { "twilio_send_sms_to_number" : {
            "country" : "1",
            "number" : [ "node:field-mobile" ],
            "message" : [ "node:field-sms" ]
          }
        }
      ]
    }
  }');
  return $items;
}
