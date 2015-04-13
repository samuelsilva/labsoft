<?php

  $base_path = 'http://localhost/labsoft/';
  $output = '<div id="main"><div id="post-content">';
  
  $output .= '<a class="menu-button" title="Link para processos correntes" href="'.base_path().'processos/processo_corrente"><img class="icon" src="'.base_path().'/'.drupal_get_path('theme', $GLOBALS['theme']).'/images/scale.png"><br/>Corrente</a>';
  $output .= '<a class="menu-button" title="Link para processos arquivados" href="'.base_path().'processos/processo_arquivado"><img class="icon" src="'.base_path().'/'.drupal_get_path('theme', $GLOBALS['theme']).'/images/archive.png"><br/>Arquivado</a>';
/* 	$output = '<a class="menu-button" title="Cadastre os dados dos clientes nesta parte do sistema" href="<?php echo $base_path; ?>processos"><img class="icon" src="<?php echo $base_path.'/'.drupal_get_path('theme', $GLOBALS['theme']); ?>/images/paper.png"><br/>Processos</a>'.
//	$output = '<a class="menu-button" title="Cadastre os dados dos clientes nesta parte do sistema" href="<?php echo $base_path; ?>"><img class="icon" src="<?php echo $base_path.'/'.drupal_get_path('theme', $GLOBALS['theme']); ?>/images/search.png"><br/>Pesquisar</a>';
*/  $output .='</div></div>';
  print $output;
