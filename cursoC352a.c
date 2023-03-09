/*
 ============================================================================
 Nome        : Exemplos3_5.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

main() {
	float a, b; // Declara a variável ponteiro
	printf("Digite dois numeros diferentes: \n");
	scanf("%f %f",&a,&b);
	if (a>b) //cabecalho da condicional
		printf("O maior numero e %f",a); // Ha somente uma instrucao interna ao if
	else
		printf("O maior numero e %f",b);
}
