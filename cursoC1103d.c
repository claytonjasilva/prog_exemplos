/*
 ============================================================================
 Nome        : Exemplos1_10.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h> // Biblioteca de funcoes de entrada/saida, como printf e scanf

main() {
	float ap1, ap2, ac; // Declara variáveis de ponto flutuante
	float media;
	printf("Digite os numeros: \n"); // Interface com usuario
	scanf("%f %f %f",&ap1,&ap2,&ac); // Leitura dos numeros
	media = 0.4*(ap1+ap2)+0.2*ac; //Atribui o resultado da expressao para media
	printf("A nota final eh %4.2f",media); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
}
