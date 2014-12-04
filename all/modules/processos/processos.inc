<?php

function _processos_arquivados_settings_submit($form,&$form_state){
	$table = 'processos_arquivados';
	$mes = $form_state['values']['inicio']['month'];
	$dia = $form_state['values']['inicio']['day'];
	$ano = $form_state['values']['inicio']['year'];
	$data_set = $ano.'/'.$mes.'/'.$dia;
	$date_conversor_inicial = strtotime($data_set);

	$mes = $form_state['values']['final']['month'];
	$dia = $form_state['values']['final']['day'];
	$ano = $form_state['values']['final']['year'];
	$data_set = $ano.'/'.$mes.'/'.$dia;
	$date_conversor_final = strtotime($data_set);		

	drupal_set_message(print_r($date_conversor_inicial,1),'warning');
	drupal_set_message(print_r($date_conversor_final,1),'warning');
}

function _processos_correntes_settings_submit($form,&$form_state){
	$table = 'processos_correntes';
	$mes = $form_state['values']['inicio']['month'];
	$dia = $form_state['values']['inicio']['day'];
	$ano = $form_state['values']['inicio']['year'];
	$data_set = $ano.'/'.$mes.'/'.$dia;
	$date_conversor_inicial = strtotime($data_set);


	drupal_set_message(print_r($date_conversor_inicial,1),'warning');
}
