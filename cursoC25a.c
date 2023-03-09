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
#include <math.h>

main() {
	float a, b, c; // Declara variáveis de ponto flutuante
	float delta, x1, x2;
	printf("Digite os coeficientes\n");
	scanf("%f %f %f",&a,&b,&c);
	delta = b * b - 4 * a * c;
	printf("delta e %f\n",delta);
	x1 = (- b + sqrt(delta))/(2 * a);
	x2 = (- b - sqrt(delta))/(2 * a);
	printf("A raiz x1 e %4.2f\n",x1); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
	printf("A raiz x2 e %4.2f\n",x2); // Especifica o tamanho do campo e a precisão
}
