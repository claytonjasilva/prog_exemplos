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
	char *nome="clayton j a silva"; // Declara a variável ponteiro
	printf("A quinta letra do meu nome e %c",nome[4]); // Atencao que o especificador e %c. Como um vetor, o primeiro caractere e referenciado pelo indice [0]
}
