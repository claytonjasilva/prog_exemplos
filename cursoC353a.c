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
	char caractere; // Declara a variável ponteiro
	float x,y;
	float z;
	float k,w,l;
	printf("Digite o caractere: ");
	scanf("%c",&caractere);
	switch (caractere) {
		case 'A': case 'B': // Pode-se usar o mesmo cabeçalho para várias opcoes
                        // Nao ha necessidade de chaves, pois o case: break delimitam o bloco de instrucoes
			scanf("%f %f",&x,&y);
			printf("A soma e %f",x+y);
			break;
		case 'C':
			scanf("%f",&z);
			printf("O quadrado e %f",z*z);
			break;
		case 'D':
			scanf("%f %f %f",&k,&w,&l);
			if (k>w)
				if (k>l)
					printf("O maior numero e %f",k);
				else 
					printf("O maior numero e %f",l);
			else
				if (w>l)
					printf("O maior numero e %f",w);
				else
					printf("O maior numero e %f",l);
			break;
		default:
			printf("Entrada invalida");
		
	}
		
}
