/*
 ============================================================================
 Nome        : analiseFator.c
 Autor       : clayton j a Silva
 Descrição   : algoritmo recursivo descendente de análise sintática
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#define MAX_REG 50

typedef struct
	{ int tokenval;
	  char stringvalor;
	} TokenRegistro;

TokenRegistro registro[MAX_REG];
int tokenProximo;

void arrayToken(void); // Simula o array de token
void fator(int token); // Executa a anáçise descendente no ramo da abstração fator
void casamento(char tokenEsperado); // Casa o token seguinte e avança a entrada de tokens
void expr(int token); // Executa a anáçise descendente no ramo da abstração exp
void termo(int token); // Executa a anáçise descendente no ramo da abstração termo
void soma(int token); // Executa a anáçise descendente no ramo da abstração soma
void erro(void);

int main(void) {
	arrayToken(); // Carrega o array de token da análise léxica
	// Análise sintática
	scanf("%i",&tokenProximo); //Próximo token da cadeia
	fator(tokenProximo);

	printf("DIGITE ENTER PARA ENCERRAR ");
	getch();
	return EXIT_SUCCESS;
}

void arrayToken(void){
	// Array de tokens produzido na análise léxica
	registro[0].tokenval=1;
	registro[0].stringvalor='(';
	registro[1].tokenval=2;
	registro[1].stringvalor='4';
	registro[2].tokenval=1;
	registro[2].stringvalor='+';
	registro[3].tokenval=2;
	registro[3].stringvalor='3';
	registro[4].tokenval=1;
	registro[4].stringvalor=')';
}

void fator(int token){
	switch(registro[token].stringvalor)
	{
	case '(':
		casamento('(');
		expr(tokenProximo);
		casamento(')');
		break;
	case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
		casamento(registro[token].stringvalor);
		break;
	default:
		erro();
	}
}

void casamento(char tokenEsperado){
	if (registro[tokenProximo].stringvalor==tokenEsperado){
		printf("%c\n",registro[tokenProximo].stringvalor);
		tokenProximo++;
		printf("proximo...\n");
	}
	else
		erro();
}

void expr(int token){
	switch(registro[token].stringvalor)
		{
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
			termo(token);
			soma(tokenProximo);
			termo(tokenProximo);
			break;
		default:
				erro();
		}
}

void termo(int token){
	fator(token);
}

void soma(int token){
	switch(registro[token].stringvalor)
	{
		case '+':
			casamento('+');
			break;
		case '-':
			casamento('-');
			break;
		default:
			erro();
	}
}


void erro(void){
	printf("erro!\n");
	tokenProximo++; // Prossegue na análise
}
