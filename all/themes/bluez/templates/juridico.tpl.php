<?php

	$base_path = 'http://localhost/labsoft/';
	$output = '<div id="main"><div id="post-content">';
  
  
    $output .= '<a class="menu-button" title="Link para a lista de processos" href="'.base_path().'cadastro/cliente"><img class="icon" src="'.base_path().'/'.drupal_get_path('theme', $GLOBALS['theme']).'/images/pencil.png"><br/>Cadastros</a>';
    $output .= '<a class="menu-button" title="Cadastre os dados dos clientes nesta parte do sistema" href="'.base_path().'processos"><img class="icon" src="'.base_path().'/'.drupal_get_path('theme', $GLOBALS['theme']).'/images/paper.png"><br/>Processos</a>';
    $output .= '<a class="menu-button" title="Cadastre os dados dos clientes nesta parte do sistema" href="'.base_path().'listagem"><img class="icon" src="'.base_path().'/'.drupal_get_path('theme', $GLOBALS['theme']).'/images/search.png"><br/>Pesquisar</a>';
        
	$output .='</div></div>';
	print $output;
