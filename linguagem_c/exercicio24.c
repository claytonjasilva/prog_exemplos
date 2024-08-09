/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo24.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
	char c1,c2,c3; // Declara variáveis de tipo caractere
	printf("Digite o caractere 1: ");
	scanf("%c",&c1);
	printf("Digite o caractere 2: ");
	scanf(" %c",&c2); // inserido espaço antes do identificador
	printf("Digite o caractere 3: ");
	scanf(" %c",&c3); // inserido espaço antes do identificador
	printf("Os valores ASCII dos caracteres digitados sao: %c-%i, %c-%i, %c-%i\n",c1,c1,c2,c2,c3,c3);

	return 0;
}