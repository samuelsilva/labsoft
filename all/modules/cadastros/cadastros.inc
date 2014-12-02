<?php

/**
 * @file
 * Cadastros module increment component.
 */

/**
 * Implements _cadastros_vara_settings_submit().
 */

function _cadastros_vara_settings_submit($form,&$form_state){
	$table = 'cadastros_varas';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_comarca_settings_submit($form,&$form_state){
	$table = 'cadastros_comarcas';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_natureza_settings_submit($form,&$form_state){
	$table = 'cadastros_natureza';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_tribunais_settings_submit($form,&$form_state){
	$table = 'cadastros_tribunal';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_acao_settings_submit($form,&$form_state){
	$table = 'cadastros_acao';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_conta_settings_submit($form,&$form_state){
	$table = 'cadastros_conta';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_regional_settings_submit($form,&$form_state){
	$table = 'cadastros_regional';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_fase_settings_submit($form,&$form_state){
	$table = 'cadastros_fase';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_exito_settings_submit($form,&$form_state){
	$table = 'cadastros_exito';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}

function _cadastros_recurso_settings_submit($form,&$form_state){
	$table = 'cadastros_recursos';
	
	$record = array(
		'nome' => $form_state['values']['nome'],
	);
	
	drupal_write_record($table,$record);
}





// função que trata a inserção dos dados na tabela de clientes

function _cadastros_client_settings_submit($form,&$form_state){
	$table = 'cadastros_clientes';
	$mes = $form_state['values']['data_nasc']['month'];
	$dia = $form_state['values']['data_nasc']['day'];
	$ano = $form_state['values']['data_nasc']['year'];
	$data_set = $ano.'/'.$mes.'/'.$dia;
	$date_conversor_nasc = strtotime($data_set);

	$mes = $form_state['values']['data_exp']['month'];
	$dia = $form_state['values']['data_exp']['day'];
	$ano = $form_state['values']['data_exp']['year'];
	$data_set = $ano.'/'.$mes.'/'.$dia;
	$date_conversor_exp = strtotime($data_set);


	drupal_set_message(print_r($date_conversor_nasc,1),'warning');
	drupal_set_message(print_r($date_conversor_exp,1),'warning');
	$record = array(
		'nome' => $form_state['values']['nome'],
		'data_nasc'=> $date_conversor_nasc,
		'RG' => $form_state['values']['RG'],
		'org_exp' => $form_state['values']['org_exp'],
		//'data_exp' => $form_state['values']['data_exp'],
		'data_exp' => $date_conversor_exp,
		
		'CPF' => $form_state['values']['CPF'],
		'nacionalidade' => $form_state['values']['nacionalidade'],
		'profissao' => $form_state['values']['profissao'],
		'estado_civil' => $form_state['values']['estado_civil'],
		'tipo' => $form_state['values']['tipo'],
		'pessoa_tipo' => $form_state['values']['pessoa_tipo'],
		'observacao' => $form_state['values']['observacao'],
		'PIS' => $form_state['values']['PIS'],
		'num_ct' => $form_state['values']['num_ct'],
		'serie' => $form_state['values']['serie'],
		'res_endereco' => $form_state['values']['res_endereco'],
		//residencial
		'res_CEP' => $form_state['values']['res_CEP'],
		'res_estado' => $form_state['values']['res_estado'],
		'res_cidade' => $form_state['values']['res_cidade'],
		'res_telefone' => $form_state['values']['res_telefone'],
		'res_celular' => $form_state['values']['res_celular'],
		'res_email' => $form_state['values']['res_email'],
		//comercial
		'com_endereco' => $form_state['values']['com_endereco'],
		'com_CEP' => $form_state['values']['com_CEP'],
		'com_estado' => $form_state['values']['com_estado'],
		'com_cidade' => $form_state['values']['com_cidade'],
		'com_telefone' => $form_state['values']['com_telefone'],
		'com_celular' => $form_state['values']['com_celular'],
		'com_email' => $form_state['values']['com_email'],
	);
	
	drupal_write_record($table,$record);
}
