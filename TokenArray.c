/*
 ============================================================================
 Nome      : TokenArray.c
 Autor     : Prof Clayton J A Silva - Compiladores princípios e práticas, Louden K
 Descrição : Implementa DFA identificador com variável de estado e testes
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_REG 4


typedef enum // Definem os token da linguagem TINY adaptada
	{RESERVADA,SIMBOLO,OUTRO}
	TokenTipo;

typedef struct
	{ TokenTipo tokenval;
	  char *stringvalor;
	  int numval;
	} TokenRegistro;

TokenRegistro registro[MAX_REG];


int main(void) {
	int i;

	for (i=0;i<MAX_REG;i++){
		registro[i].tokenval = SIMBOLO; //Alterar o código para ler vários valores diferentes de TOKEN
		registro[i].stringvalor = malloc(20*sizeof(char));
		scanf("%s",registro[i].stringvalor);
		registro[i].numval = i;

	}

	for (i=0;i<MAX_REG;i++)
		printf("%i",registro[i].tokenval);

	printf("DIGITE ENTER PARA ENCERRAR ");
	getch();
	return EXIT_SUCCESS;
}
