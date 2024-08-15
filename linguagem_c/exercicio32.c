/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo32.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main () {
	char ch='a'; // Declara e inicializa variavel do tipo char
	while (ch<='z'){ // Observe a estrutura de repeticao while
		printf("O caractere de ordem %i eh %c de valor decimal\n",ch+1-'a',ch); // escreve a ordem usando o valor ASCII do char
		ch++; // Como os caracteres possuem uma representacao decimal, aceitam incremento em C
	}
	
    return 0;
}
