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
	char nome[20]; // Declara a variavel 
	printf("Digite o primeiro nome da pessoa: ");
	scanf("%s",nome); // Observe que não se utiliza o especificador de tipo na leitura
	printf("O nome digitado eh: %s",nome);
}
