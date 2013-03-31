<?php
/**
 * @file
 * total_web.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function total_web_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_fields_alter().
 */
function total_web_field_default_fields_alter(&$data) {
  if (isset($data['node-date_migrate_example-body'])) {
    $data['node-date_migrate_example-body']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-body']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-body']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-body']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-body']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-body']['field_instance']['display']['default']['weight'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-body']['field_instance']['widget']['weight'] = 1; /* WAS: 1 */
  }
  if (isset($data['node-date_migrate_example-field_date'])) {
    $data['node-date_migrate_example-field_date']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date']['field_config']['cardinality'] = -1; /* WAS: -1 */
    $data['node-date_migrate_example-field_date']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date']['field_instance']['display']['default']['weight'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date']['field_instance']['widget']['weight'] = 2; /* WAS: 2 */
  }
  if (isset($data['node-date_migrate_example-field_date_range'])) {
    $data['node-date_migrate_example-field_date_range']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date_range']['field_config']['cardinality'] = -1; /* WAS: -1 */
    $data['node-date_migrate_example-field_date_range']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date_range']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date_range']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date_range']['field_instance']['display']['default']['weight'] = 2; /* WAS: 2 */
    $data['node-date_migrate_example-field_date_range']['field_instance']['widget']['weight'] = 3; /* WAS: 3 */
  }
  if (isset($data['node-date_migrate_example-field_date_repeat'])) {
    $data['node-date_migrate_example-field_date_repeat']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date_repeat']['field_config']['cardinality'] = -1; /* WAS: -1 */
    $data['node-date_migrate_example-field_date_repeat']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date_repeat']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_date_repeat']['field_instance']['default_value'] = NULL; /* WAS: '' */
    $data['node-date_migrate_example-field_date_repeat']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date_repeat']['field_instance']['display']['default']['weight'] = 7; /* WAS: 7 */
    $data['node-date_migrate_example-field_date_repeat']['field_instance']['settings']['repeat_collapsed'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_date_repeat']['field_instance']['widget']['type'] = 'date_select'; /* WAS: 'date_text_repeat' */
    $data['node-date_migrate_example-field_date_repeat']['field_instance']['widget']['weight'] = 8; /* WAS: 8 */
  }
  if (isset($data['node-date_migrate_example-field_datestamp'])) {
    $data['node-date_migrate_example-field_datestamp']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datestamp']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datestamp']['field_instance']['display']['default']['weight'] = 3; /* WAS: 3 */
    $data['node-date_migrate_example-field_datestamp']['field_instance']['widget']['weight'] = 4; /* WAS: 4 */
  }
  if (isset($data['node-date_migrate_example-field_datestamp_range'])) {
    $data['node-date_migrate_example-field_datestamp_range']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp_range']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp_range']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datestamp_range']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp_range']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datestamp_range']['field_instance']['display']['default']['weight'] = 4; /* WAS: 4 */
    $data['node-date_migrate_example-field_datestamp_range']['field_instance']['widget']['settings']['increment'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datestamp_range']['field_instance']['widget']['weight'] = 5; /* WAS: 5 */
  }
  if (isset($data['node-date_migrate_example-field_datetime'])) {
    $data['node-date_migrate_example-field_datetime']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datetime']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datetime']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datetime']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datetime']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datetime']['field_instance']['display']['default']['weight'] = 5; /* WAS: 5 */
    $data['node-date_migrate_example-field_datetime']['field_instance']['widget']['weight'] = 6; /* WAS: 6 */
  }
  if (isset($data['node-date_migrate_example-field_datetime_range'])) {
    $data['node-date_migrate_example-field_datetime_range']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datetime_range']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datetime_range']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datetime_range']['field_config']['translatable'] = 1; /* WAS: 1 */
    $data['node-date_migrate_example-field_datetime_range']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-date_migrate_example-field_datetime_range']['field_instance']['display']['default']['weight'] = 6; /* WAS: 6 */
    $data['node-date_migrate_example-field_datetime_range']['field_instance']['widget']['weight'] = 7; /* WAS: 7 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function total_web_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['archive']->display['page']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['backlinks']->display['page']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['comments_recent'])) {
    $data['comments_recent']->display['block']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
    $data['comments_recent']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['comments_recent']->display['page']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    unset($data['comments_recent']->display['default']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['frontpage']->display['feed']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['frontpage']->display['page']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['glossary']->display['page']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['taxonomy_term']->display['feed']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
    $data['taxonomy_term']->display['page']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['tracker'])) {
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['fields']['timestamp']['comments'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['tracker']->display['page']->display_options['defaults'] = array(
      'hide_admin_links' => FALSE,
    ); /* WAS: '' */
    unset($data['tracker']->display['default']->display_options['fields']['new_comments']['link_to_comment']);
    unset($data['tracker']->display['default']->display_options['fields']['timestamp']['link_to_node']);
    unset($data['tracker']->display['default']->display_options['style_options']['override']);
  }
}

/**
 * Implements hook_node_info().
 */
function total_web_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
