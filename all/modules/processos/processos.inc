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

	//drupal_set_message(print_r($date_conversor_inicial,1),'warning');
	//drupal_set_message(print_r($date_conversor_final,1),'warning');

	$record = array(
	  'processo' => $form_state['values']['nome'],
	  'data_inicio' => $date_conversor_inicial,
	  'data_arquivamento' => $date_conversor_final,
	  'valor' => $form_state['values']['valor'],
	  'pasta' => $form_state['values']['pasta'],
	  'subpasta' => $form_state['values']['subpasta'],
	  'regional' => intval($form_state['values']['regional']),
	  'natureza' => intval($form_state['values']['natureza']),
	  'acao' => intval($form_state['values']['acao']),
	  'fase' => intval($form_state['values']['fase']),
	  'comarca' => intval($form_state['values']['comarca']),
	  'vara' => intval($form_state['values']['vara']),
	  'exito' => intval($form_state['values']['exito']),
	  //ETAPA DADOS CLIENTE
	  'cliente' => intval($form_state['values']['cliente_nome']),
	  'valor_cliente' => $form_state['values']['cliente_parte'],
	  'advogado_cliente' => $form_state['values']['cliente_advogado'],
 	  //ETAPA DADOS ADVERSO		  
	  'adverso' => $form_state['values']['adverso_nome'],
	  'valor_adverso' => $form_state['values']['adverso_parte'],
	  'advogado_adverso' => $form_state['values']['adverso_advogado'],
	);
	drupal_write_record($table,$record);
	//Mensagem de sucesso
	drupal_set_message('Processo Arquivado salvo com sucesso','status');

}



function _processos_correntes_settings_submit($form,&$form_state){
	$table = 'processos_correntes';
	$mes = $form_state['values']['inicio']['month'];
	$dia = $form_state['values']['inicio']['day'];
	$ano = $form_state['values']['inicio']['year'];
	$data_set = $ano.'/'.$mes.'/'.$dia;
	$date_conversor_inicial = strtotime($data_set);


	

	$record = array(
	  'processo' => $form_state['values']['nome'],
	  'data_inicio' => $date_conversor_inicial,
	  'valor' => $form_state['values']['valor'],
	  'pasta' => $form_state['values']['pasta'],
	  'subpasta' => $form_state['values']['subpasta'],
	  'regional' => intval($form_state['values']['regional']),
	  'natureza' => intval($form_state['values']['natureza']),
	  'acao' => intval($form_state['values']['acao']),
	  'fase' => intval($form_state['values']['fase']),
	  'comarca' => intval($form_state['values']['comarca']),
	  'vara' => intval($form_state['values']['vara']),
	  'exito' => intval($form_state['values']['exito']),
	  //ETAPA DADOS CLIENTE
	  'cliente' => intval($form_state['values']['cliente_nome']),
	  'valor_cliente' => $form_state['values']['cliente_parte'],
	  'advogado_cliente' => $form_state['values']['cliente_advogado'],
 	  //ETAPA DADOS ADVERSO		  
	  'adverso' => $form_state['values']['adverso_nome'],
	  'valor_adverso' => $form_state['values']['adverso_parte'],
	  'advogado_adverso' => $form_state['values']['adverso_advogado'],
	);
	drupal_write_record($table,$record);
	//dpr($record);
	
	
	//drupal_set_message(print_r($form_state['values']['regional']),'status');
	//drupal_set_message(dpr($record),'status');
	drupal_set_message('Processo Corrente salvo com sucesso','status');

}


	
