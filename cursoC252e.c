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
	char *nome; // Declara nome como um ponteiro de char
	printf("Digite o nome\n");
	scanf("%s",nome); // Le o nome - nao usar o operador unario, pois o nome da string ja e um ponteiro
	printf("Meu nome e %s",nome);
}
