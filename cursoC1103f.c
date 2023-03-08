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
	int per, dist; // Declara variáveis do tipo inteiro
	int n_voltas, dist_ult;
	printf("Digite o perimetro: "); // Apresenta a informacao na console
	scanf("%i",&per);
	printf("\nDigite a distancia percorrida: "); // Apresenta a informacao na console
	scanf("%i",&dist);
	n_voltas =  dist / per; // Divisao inteira
	dist_ult = dist % per; // Modulo - resto da divisao inteira
	printf("O numero de voltas completas e %i\n",n_voltas); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
	printf("O veiculo percorreu %i alem da ultima volta",dist_ult);
}
