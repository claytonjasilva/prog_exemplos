/*
 ============================================================================
 Nome        : analiseFator.c
 Autor       : clayton j a Silva
 Descrição   : algoritmo recursivo descendente de análise sintática
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_REG 50

typedef struct
	{ int tokenval;
	  char *stringvalor;
	} TokenRegistro;

TokenRegistro registro[MAX_REG];
int tokenProximo;
char *idt[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
char *oplog[] = {">","<","==","!="};
char *oparitm[] = {"+","-","*","/"};

void arrayToken(void); // Simula o array de token
void declIf(int token); // Executa a anáçise descendente no ramo da abstração fator
void casamento(char *tokenEsperado); // Casa o token seguinte e avança a entrada de tokens
void expr(int token); // Executa a anáçise descendente no ramo da abstração exp
int testaPertence(char *c, char *conjunto[], int n);
void declaracao(int token); // Executa a anáçise descendente no ramo da abstração termo
void erro(void);

int main(void) {
	int j;
	arrayToken(); // Carrega o array de token da análise léxica
	// Análise sintática
	scanf("%i",&tokenProximo); //Próximo token da cadeia
	declIf(tokenProximo);
	printf("DIGITE ENTER PARA ENCERRAR ");
	scanf("%i",&j);
	return EXIT_SUCCESS;
}

void arrayToken(void){
	// Array de tokens produzido na análise léxica
	registro[0].tokenval=0;
	registro[0].stringvalor= "if";
	registro[1].tokenval=1;
	registro[1].stringvalor = "(";
	registro[2].tokenval=2;
	registro[2].stringvalor = "a";
	registro[3].tokenval=1;
	registro[3].stringvalor = ">";
	registro[4].tokenval=2;
	registro[4].stringvalor = "b";
	registro[5].tokenval=1;
	registro[5].stringvalor = ")";
	registro[6].tokenval=2;
	registro[6].stringvalor = "b";
	registro[7].tokenval=1;
	registro[7].stringvalor = "=";
	registro[8].tokenval=2;
	registro[8].stringvalor = "a";
	registro[9].tokenval=1;
	registro[9].stringvalor = ";";
	registro[10].tokenval=0;
	registro[10].stringvalor = "else";
	registro[11].tokenval=2;
	registro[11].stringvalor = "a";
	registro[12].tokenval=1;
	registro[12].stringvalor = "=";
	registro[13].tokenval=2;
	registro[13].stringvalor = "b";
	registro[14].tokenval=1;
	registro[14].stringvalor = "+";
	registro[15].tokenval=2;
	registro[15].stringvalor = "c";
	registro[16].tokenval=1;
	registro[16].stringvalor = ";";
}

void declIf(int token){
	if (strcmp(registro[token].stringvalor,"if")==0){
		casamento("if");
		casamento("(");
		expr(tokenProximo);
		casamento(")");
		declaracao(tokenProximo);
		if (strcmp(registro[tokenProximo].stringvalor,"else")==0){
			casamento("else");
			declaracao(tokenProximo);
		}
	}
	else
		erro();
}

void casamento(char *tokenEsperado){
	if (strcmp(registro[tokenProximo].stringvalor,tokenEsperado)==0){
		printf("%s\n",registro[tokenProximo].stringvalor);
		tokenProximo++;
		printf("proximo...\n");
	}
	else
		erro();
}

void expr(int token){
	if (testaPertence(registro[token].stringvalor,idt, 26))
		casamento(registro[token].stringvalor);
	else
		erro();
	if (testaPertence(registro[tokenProximo].stringvalor,oplog, 4))
		casamento(registro[tokenProximo].stringvalor);
	else
		erro();
	if (testaPertence(registro[tokenProximo].stringvalor,idt, 26))
		casamento(registro[tokenProximo].stringvalor);
	else
		erro();
}

int testaPertence(char *c, char *conjunto[], int n){
		// Busca sequencial
		int flag=0;
		for(int i=0;i<n;i++)
			if (strcmp(c,conjunto[i])==0)
				flag = 1;
		return flag;
}


void declaracao(int token){
	if (testaPertence(registro[token].stringvalor,idt, 26))
		casamento(registro[token].stringvalor);
	else
		erro();
	casamento("=");
	if (testaPertence(registro[tokenProximo].stringvalor,idt, 26))
			casamento(registro[tokenProximo].stringvalor);
	else
		erro();
	if (strcmp(registro[tokenProximo].stringvalor,";")==0)
		casamento(";");
	else {
		  if (testaPertence(registro[tokenProximo].stringvalor,oparitm, 4))
			casamento(registro[tokenProximo].stringvalor);
		  else
			erro();
		  if (testaPertence(registro[tokenProximo].stringvalor,idt, 26))
			casamento(registro[tokenProximo].stringvalor);
		  else
			erro();
		  casamento(";");
		}
}

void erro(void){
	printf("erro!\n");
	printf("%s\n",registro[tokenProximo].stringvalor);
	tokenProximo++; // Prossegue na análise
}

