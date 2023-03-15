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
	float a, b; // Declara as variaveis
	printf("Digite dois numeros diferentes: \n");
	leitura: scanf("%f %f",&a,&b); // leitura e um label utilizado combinado com o comando goto
	if (a==b){
		printf("Os numeros digitados sao iguais! Digite novamente dois numeros diferentes...\n");
		goto leitura; // O comando goto nao eh muito recomendado, pois desestrutura o codigo,
		              // porem e util para TRATAMENTO DE EXCEÇOES
	}
	if (a>b) //cabecalho da condicional
		printf("O maior numero e %f",a); // Ha somente uma instrucao interna ao if
	else
		printf("O maior numero e %f",b);
}
