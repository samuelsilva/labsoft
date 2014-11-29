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
