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

main() {
	char ch1, ch2, ch3, ch4, ch5; // Declara variáveis do tipo char
	ch1=getch(); // O prototipo da funcao e int getch(void), logo retorna um inteiro;
	printf("Opa!!! Nao houve eco!!! Pode digitar os demais caracteres sem enter... \n");
	ch2=getch();
	ch3=getch();
	ch4=getch();
	ch5=getch();
	putchar(ch1); printf("\n"); // A funcao putchar reconhece o decimal que corresponde ao char
	putchar(ch2); printf("\n");
	putchar(ch3); printf("\n");
	putchar(ch4); printf("\n");
	putchar(ch5); printf("\n");
}
