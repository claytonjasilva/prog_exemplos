/*
 ============================================================================
 Nome        : Exemplos1_10.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

main() {
	float num1, num2; // Declara variáveis de ponto flutuante
	printf("Digite os numeros\n"); // Apresenta a informacao na console
	scanf("%f %f",&num1,&num2); // Le os dois numeros de ponto flutuante - formato scanf(<cadeia de caracteres de controle>,<lista de ponteiros dos argumentos>);
	printf("%f",num1+num2); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
}
