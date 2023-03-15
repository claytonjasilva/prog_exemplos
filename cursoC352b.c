/*
 ============================================================================
 Nome        : Exemplos3_5.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

main() {
	int idade_1, idade_2; // Declara as variaveis de idade
	char nome_1[20], nome_2[20]; // Declara as variaveis de nome
	printf("Digite o nome e a idade da primeira pessoa: \n");
	printf("nome: "); scanf("%s",nome_1);
	printf("idade: "); scanf("%d",&idade_1);
	printf("\nDigite o nome e a idade da segunda pessoa: \n");
	printf("nome: ");  scanf("%s",nome_2);
	printf("idade: "); scanf("%d",&idade_2);
	
	if (idade_1>idade_2) //cabecalho da condicional
		printf("A pessoa mais velha eh %s",nome_1); // Ha somente uma instrucao interna ao if
	else if (idade_2>idade_1) //cabecalho da condicional
			printf("A pessoa mais velha eh %s",nome_2); // Ha somente uma instrucao interna ao if 
		 else
		 	printf("As pessoas possuem a mesma idade");
}
