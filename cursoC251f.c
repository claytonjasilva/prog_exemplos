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
	char ch1, ch2, ch3, ch4, ch5; // Declara variáveis de ponto flutuante
	scanf("%c %c %c %c %c",&ch1, &ch2, &ch3, &ch4, &ch5);
	// Observe que os especificador da cadeia de caracteres eh %d ou %i
	printf("O primeiro caractere e %d\n",ch1);
	printf("O segundo caractere e %i\n",ch2);
	printf("O terceiro caractere e %d\n",ch3);
	printf("O quarto caractere e %i\n",ch4);
	printf("O quinto caractere e %d\n",ch5);
}
