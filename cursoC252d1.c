/*
 ============================================================================
 Nome        : Exemplos2_5.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

main() {
	char nome[20]; // Declara a string que pode ter até 20 caracteres
	printf("Digite o nome\n");
	scanf("%[^\n]",nome); // Observe o especificador de tipo %s 
                          // Nao usar o operador unario &, pois o nome da string ja e um ponteiro
	printf("Meu nome e %s",nome);
}
