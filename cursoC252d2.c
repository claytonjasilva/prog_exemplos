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
	fgets(nome,20,stdin); // A palavra reservada stdin especifica a leitura no teclado
	printf("Meu nome e %s",nome);
}
