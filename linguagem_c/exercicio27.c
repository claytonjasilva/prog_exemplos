/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo27.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
	char nome[20]; // Declara a string
	int i = 0; // declara e inicializa a variável i
	printf("Digite seu nome: ");
	scanf(" %[^\n]",nome);
	printf("\nCaractere 1: %c\n",nome[i++]); // escreve e avança o caractere
	if (nome[i] == ' ')
		i++; // avança a posição se for espaço em branco
	printf("\nCaractere 2: %c\n",nome[i++]);
	if (nome[i] == ' ')
		i++;
	printf("\nCaractere 3: %c\n",nome[i++]);
	if (nome[i] == ' ')
		i++;
	printf("\nCaractere 4: %c\n",nome[i]);

	return 0;
}