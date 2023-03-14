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
#include <math.h> // Uso da biblioteca math.h
#define PI 3.1415 // Macro para definir a constante pi

main() {
	float raio; // Declara variáveis de ponto flutuante
	float perimetro, area;
	printf("Digite o raio\n");
	scanf("%f",&raio);
	perimetro = 2 * PI * raio;
	printf("O perimetro eh %.3f\n",perimetro);
	area = PI * pow(raio,2); // Funcao da biblioteca math.h
	printf("A area eh %.3f\n",area);
	
}
