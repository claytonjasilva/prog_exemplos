/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo22.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <math.h> // Uso da biblioteca math.h
#define PI 3.1415 // Macro para definir a constante pi

int main() {
	float raio; // Declara variáveis de ponto flutuante
	float perimetro, area;
	printf("Digite o raio em metros\n");
	scanf("%f",&raio);
	perimetro = 2 * PI * raio;
	printf("O perimetro eh %.3f metros\n",perimetro);
	area = PI * pow(raio,2); // Funcao da biblioteca math.h
	printf("A area eh %.3f metros quadrados\n",area);

	return 0;
}