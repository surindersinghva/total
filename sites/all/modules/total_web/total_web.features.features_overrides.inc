<?php
/**
 * @file
 * total_web.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function total_web_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-date_migrate_example-body.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-body.field_config|cardinality"] = 1;
  $overrides["field.node-date_migrate_example-body.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-body.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-body.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-body.field_instance|display|default|weight"] = 0;
  $overrides["field.node-date_migrate_example-body.field_instance|widget|weight"] = 1;
  $overrides["field.node-date_migrate_example-field_date.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_date.field_config|cardinality"] = -1;
  $overrides["field.node-date_migrate_example-field_date.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_date.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_date.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_date.field_instance|display|default|weight"] = 1;
  $overrides["field.node-date_migrate_example-field_date.field_instance|widget|weight"] = 2;
  $overrides["field.node-date_migrate_example-field_date_range.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_date_range.field_config|cardinality"] = -1;
  $overrides["field.node-date_migrate_example-field_date_range.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_date_range.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_date_range.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_date_range.field_instance|display|default|weight"] = 2;
  $overrides["field.node-date_migrate_example-field_date_range.field_instance|widget|weight"] = 3;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_config|cardinality"] = -1;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_instance|default_value"] = NULL;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_instance|display|default|weight"] = 7;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_instance|settings|repeat_collapsed"] = 0;
  $overrides["field.node-date_migrate_example-field_date_repeat.field_instance|widget|type"] = 'date_select';
  $overrides["field.node-date_migrate_example-field_date_repeat.field_instance|widget|weight"] = 8;
  $overrides["field.node-date_migrate_example-field_datestamp.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp.field_config|cardinality"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datestamp.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datestamp.field_instance|display|default|weight"] = 3;
  $overrides["field.node-date_migrate_example-field_datestamp.field_instance|widget|weight"] = 4;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_config|cardinality"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_instance|display|default|weight"] = 4;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_instance|widget|settings|increment"] = 1;
  $overrides["field.node-date_migrate_example-field_datestamp_range.field_instance|widget|weight"] = 5;
  $overrides["field.node-date_migrate_example-field_datetime.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_datetime.field_config|cardinality"] = 1;
  $overrides["field.node-date_migrate_example-field_datetime.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datetime.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_datetime.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datetime.field_instance|display|default|weight"] = 5;
  $overrides["field.node-date_migrate_example-field_datetime.field_instance|widget|weight"] = 6;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_config|active"] = 1;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_config|cardinality"] = 1;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_config|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_config|translatable"] = 1;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_instance|deleted"] = 0;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_instance|display|default|weight"] = 6;
  $overrides["field.node-date_migrate_example-field_datetime_range.field_instance|widget|weight"] = 7;

  // Exported overrides for: views_view
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.archive.display|page|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|page|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.comments_recent.display|block|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.comments_recent.display|default|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.comments_recent.display|page|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.frontpage.display|feed|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.frontpage.display|page|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|page|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.taxonomy_term.display|feed|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.taxonomy_term.display|page|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|exception|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|specify_validation"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|new_comments|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|comments"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.tracker.display|page|display_options|defaults"] = array(
    'hide_admin_links' => FALSE,
  );

 return $overrides;
}
