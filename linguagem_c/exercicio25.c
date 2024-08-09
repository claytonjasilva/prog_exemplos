/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo25.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <conio.h>

int main() {
	char c1,c2,c3; // Declara variáveis de tipo caractere
	printf("Digite o caractere 1: ");
	c1 = getch();
	printf("\nDigite o caractere 2: ");
	c2 = getche();
	printf("\nDigite o caractere 3: ");
	c3 = getche();
	printf("\nOs valores ASCII dos caracteres digitados sao: %c-%i, %c-%i, %c-%i\n",c1,c1,c2,c2,c3,c3);

	return 0;
}