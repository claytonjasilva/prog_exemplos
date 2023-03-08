/*
 ============================================================================
 Nome        : Exemplos1_10.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define PI 3.1415 // Define a macro PI

main() {
	float raio=2.1, area; // Declara variáveis de ponto flutuante
	                      // Inicializa o valor de raio na declaracao
	area = PI*raio*raio; //Atribui o resuultado da expressao para media
	printf("%f",area); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
}
