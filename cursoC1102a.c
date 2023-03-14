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

main() {
	float ap1=8.5, ap2=7.3, ac=5; // Declara variáveis de ponto flutuante
	float media;
	media = 0.4*(ap1+ap2)+0.2*ac; //Atribui o resultado da expressao para media
	printf("%4.2f",media); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
}
