<?php
/**
 * @file
 * acc_organizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_organizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_organizations_affected';
  $view->description = '';
  $view->tag = 'Access';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Access Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Responsible Actor';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Type (field_organization_type) */
  $handler->display->display_options['relationships']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['relationships']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['relationships']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_3']['id'] = 'uuid_3';
  $handler->display->display_options['filters']['uuid_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_3']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_3']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_3']['value'] = 'e1a4ac46-e99f-b2d4-b13a-3f0502760aad';
  $handler->display->display_options['filters']['uuid_3']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'f745d3aa-44fd-7b14-e1c2-af1aa29b77ff';
  $handler->display->display_options['filters']['uuid']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_1']['value'] = 'b1109f9e-735a-85e4-d957-36e4c1fbb017';
  $handler->display->display_options['filters']['uuid_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_2']['value'] = 'f4d4f969-8e55-4304-bfc3-e0e0df1bd8a2';
  $handler->display->display_options['filters']['uuid_2']['group'] = 2;

  /* Display: Submited by (Impediment) */
  $handler = $view->new_display('entityreference', 'Submited by (Impediment)', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Submited by (Impediment)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organization_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_organization_type' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Responsible Actor */
  $handler = $view->new_display('entityreference', 'Responsible Actor', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Responsible Actor';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organization_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_organization_type' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Targeted Actor */
  $handler = $view->new_display('entityreference', 'Targeted Actor', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Targeted Actor';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organization_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_organization_type' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_8']['id'] = 'uuid_8';
  $handler->display->display_options['filters']['uuid_8']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_8']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_8']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_8']['value'] = 'e1a4ac46-e99f-b2d4-b13a-3f0502760aad';
  $handler->display->display_options['filters']['uuid_8']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '02c1b1cb-2a3f-1c44-6943-1919a6d70b07';
  $handler->display->display_options['filters']['uuid']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '2602f085-97ab-ecb4-e55e-ca2a4b4dfbb3';
  $handler->display->display_options['filters']['uuid_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_2']['value'] = 'f0f0c3ef-5f3f-4bc7-b4df-de3d00225ae8';
  $handler->display->display_options['filters']['uuid_2']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_3']['id'] = 'uuid_3';
  $handler->display->display_options['filters']['uuid_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_3']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_3']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_3']['value'] = 'bc624e17-41f2-24c4-11ea-886410fe0e3d';
  $handler->display->display_options['filters']['uuid_3']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_4']['id'] = 'uuid_4';
  $handler->display->display_options['filters']['uuid_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_4']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_4']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_4']['value'] = '7299c269-3aa3-9044-e161-c6ebe2e6d6c2';
  $handler->display->display_options['filters']['uuid_4']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_5']['id'] = 'uuid_5';
  $handler->display->display_options['filters']['uuid_5']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_5']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_5']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_5']['value'] = '3f126a55-8bb6-4ce3-b316-866e3857b4ab';
  $handler->display->display_options['filters']['uuid_5']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_6']['id'] = 'uuid_6';
  $handler->display->display_options['filters']['uuid_6']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_6']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_6']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_6']['value'] = '3f56eeff-83ad-fca4-c12c-ab265e846b17';
  $handler->display->display_options['filters']['uuid_6']['group'] = 2;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid_7']['id'] = 'uuid_7';
  $handler->display->display_options['filters']['uuid_7']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_7']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_7']['relationship'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['uuid_7']['value'] = 'abe34e64-aabc-47dd-ae33-c2760e1d536d';
  $handler->display->display_options['filters']['uuid_7']['group'] = 2;

  /* Display: Issuing Actor */
  $handler = $view->new_display('entityreference', 'Issuing Actor', 'entityreference_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Issuing Actor';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organization_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_organization_type' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'organizations' => 'organizations',
  );
  /* Filter criterion: Taxonomy term: Type (field_organization_type) */
  $handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_types';
  $handler->display->display_options['filters']['field_organization_type_tid']['hierarchy'] = 1;
  $translatables['acc_organizations_affected'] = array(
    t('Master'),
    t('Responsible Actor'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_organization_type'),
    t('Submited by (Impediment)'),
    t('Targeted Actor'),
    t('Issuing Actor'),
  );
  $export['acc_organizations_affected'] = $view;

  return $export;
}
