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
#include <conio.h> // Inclui funcoes de leitura/escrita de caracteres
#define TAM 15

main() {
	char ch; // Declara variavel do tipo char
	int contador = 1; // Declara variavel do tipo inteiro
	while (contador<=TAM){
		ch=getch(); // O prototipo da funcao e int getch(void), logo retorna um inteiro;
		printf("%c",ch);
		contador++;
	}
	
}
