/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo23.c
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
	printf("Os caracteres sao %c, %c, %c\n",c1,c2,c3);

	getchar(); // consome o \n do printf
	printf("\nDigite o caractere 1: ");
	c1 = getchar();
	printf("Digite o caractere 2: ");
	getchar(); // consome o \n do <Enter>
	c2 = getchar();
	printf("Digite o caractere 3: ");
	getchar();
	c3 = getchar();
	printf("O caractere 1: ");
	putchar(c1);
	printf("\nO caractere 2: ");
	putchar(c2);
	printf("\nO caractere 3: ");
	putchar(c3);

	return 0;
}