/*
 ============================================================================
 Nome      : DFAoperadorRelacional.c
 Autor     : Prof Clayton J A Silva - Compiladores princípios e práticas, Louden K
 Descrição : Implementa DFA operadores Relacionais
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NMAX 2

int main(void) {
	char *cadeia;
	int estado;


	cadeia = malloc(NMAX*sizeof(char));
	scanf("%s",cadeia);
	switch (cadeia[0]) {
		case '=':
			if ((cadeia[1]=='=')&&(cadeia[2]=='/'))
				estado = 6;
			break;
		case '<':
			if ((cadeia[1]=='=')&&(cadeia[2]=='/'))
				estado = 7;
			else
				if (cadeia[1]=='/')
					estado = 11;
			break;
		case '>':
			if ((cadeia[1]=='=')&&(cadeia[2]=='/'))
				estado = 8;
			else
				if (cadeia[1]=='/')
					estado = 10;
			break;
		case '!':
			if ((cadeia[1]=='=')&&(cadeia[2]=='/'))
				estado = 9;
			break;
		default:
			estado = 12;

	}

	switch (estado) {
			case 6:
				printf("IGUAL\n");
				break;
			case 7:
				printf("MENOR OU IGUAL\n");
				break;
			case 8:
				printf("MAIOR OU IGUAL\n");
				break;
			case 9:
				printf("DIFERENTE\n");
				break;
			case 10:
				printf("MAIOR\n");
				break;
			case 11:
				printf("MENOR\n");
				break;
			default:
				printf("ERRO\n");
		}

	printf("DIGITE ENTER PARA ENCERRAR ");
	getch();
	return EXIT_SUCCESS;
}
