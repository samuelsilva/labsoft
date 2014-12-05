<?php
/**
* Implements hook_views_api().
*/
function processos_views_api() {
  return array(
    'api' => 3,
    'path' => drupal_get_path('module', 'processos') . '/views',
  );
}


/**
* Implements hook_views_data().
*/
function processos_views_data() {
	
	$data['processos_correntes']['table']['group'] = t('Processos');
	
	$data['processos_correntes']['table']['base'] = array(
		'field' => 'id',
		'title' => 'Tabela de Processos Correntes',
		'weight' => -10,
		'help' => 'Contém os dados dos processos',
	);

	$data['processos_correntes']['table']['join'] = array(
      'cadastros_varas' => array(
		'left_field' => 'id',
		'field' => 'vara',
	  ),
	);
  
    // Node ID table field.
  $data['processos_correntes']['id'] = array(
    'title' => t('Tabela de processos correntes'),
    'help' => t('Some example content that references a node.'),
    // Define a relationship to the {node} table, so example_table views can
    // add a relationship to nodes. If you want to define a relationship the
    // other direction, use hook_views_data_alter(), or use the 'implicit' join
    // method described above.
    'relationship' => array(
      'base' => 'cadastros_varas', // The name of the table to join with.
      'base field' => 'id', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('Default label for the relationship'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
    ),
  );

  // Example plain text field.
  $data['processos_correntes']['processo'] = array(
    'title' => t('Nome do processo'),
    'help' => t('Nome do processo.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  
  return $data;
}
