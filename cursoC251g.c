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
	char ch='a'; // Declara e inicializa variavel do tipo char
	int contador=1; // Declara e inicializa variavel do tipo inteiro
	while (ch<='z'){ // Observe a estrutura de repeticao while
		printf("O %io caractere eh %c\n",contador,ch);
		ch++; // Como os caracteres possuem uma representacao decimal, aceitam incremento em C
		contador++; // O contador tambem incrementa para indicar a ordem da letra
	}
	
}
