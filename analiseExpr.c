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
int tokenProximo = 0;
char *numero[] = {"0","1","2","3","4","5","6","7","8","9"};
char *opsoma[] = {"+","-"};
char *opmult[] = {"*"};
int N, M; //Variáveis que guardam tamnho de conjuntos Primeiro e Sequencia

void arrayToken(void); // Simula o array de token
void fator(); // Executa a anáçise descendente no ramo da abstração fator
int testaPertence(char *c, char *conjunto[], int n);
void casamento(char *tokenEsperado); // Casa o token seguinte e avança a entrada de tokens
void expr(); // Executa a anáçise descendente no ramo da abstração exp
void mult(); // Executa a anáçise descendente no ramo da abstração mult
void termo(); // Executa a anáçise descendente no ramo da abstração termo
void soma(); // Executa a anáçise descendente no ramo da abstração soma
void erro();
void verificaEntrada(char *conjuntoPrimeiro[], char *conjuntoSequencia[]);
void varreParaFrente(char *conjuntoPrimeiro[], char *conjuntoSequencia[]);

int main(void) { // Análise sintática
	arrayToken(); // Carrega o array de token da análise léxica
	expr();

	printf("DIGITE ENTER PARA ENCERRAR ");
	getch();
	return EXIT_SUCCESS;
}

void arrayToken(void){
	// Array de tokens produzido na análise léxica
	registro[0].tokenval=2;
	registro[0].stringvalor="6";
	registro[1].tokenval=1;
	registro[1].stringvalor="*";
	registro[2].tokenval=1;
	registro[2].stringvalor="(";
	registro[3].tokenval=2;
	registro[3].stringvalor="4";
	registro[4].tokenval=1;
	registro[4].stringvalor="+";
	registro[5].tokenval=2;
	registro[5].stringvalor="3";
	registro[6].tokenval=1;
	registro[6].stringvalor=")";
}

void expr(){
	char *tokenPrimeiro[] = {"(","0","1","2","3","4","5","6","7","8","9"};
	N = 11;
	char *tokenSequencia[] = {"$","+","-",")"};
	M = 4;
	verificaEntrada(tokenPrimeiro, tokenSequencia);
	if (testaPertence(registro[tokenProximo].stringvalor,tokenPrimeiro,N)){
		termo();
		if (testaPertence(registro[tokenProximo].stringvalor,opsoma,2)) {
			soma();
			termo();
		}
	}
	//verificaEntrada(tokenSequencia,tokenPrimeiro);
}

void termo(){
	char *tokenPrimeiro[] = {"(","0","1","2","3","4","5","6","7","8","9"};
	N = 11;
	char *tokenSequencia[] = {"$","+","-","*"};
	M = 4;
	verificaEntrada(tokenPrimeiro, tokenSequencia);
	if (testaPertence(registro[tokenProximo].stringvalor,tokenPrimeiro,N)){
		fator();
		if (testaPertence(registro[tokenProximo].stringvalor,opmult,1)){
			mult();
			fator();
		}
	}
		//verificaEntrada(tokenSequencia,tokenPrimeiro);
}

void mult(){
	char *tokenPrimeiro[] = {"*"};
	N = 1;
	char *tokenSequencia[] = {"(","0","1","2","3","4","5","6","7","8","9"};
	M = 11;
	verificaEntrada(tokenPrimeiro, tokenSequencia);
	if (testaPertence(registro[tokenProximo].stringvalor,tokenPrimeiro,N))
		casamento("*");
	//verificaEntrada(tokenSequencia,tokenPrimeiro);
}

void fator(){
	char *tokenPrimeiro[] = {"(","0","1","2","3","4","5","6","7","8","9"};
	N = 11;
	char *tokenSequencia[] = {"$","+","-","*",")"};
	M = 5;
	verificaEntrada(tokenPrimeiro, tokenSequencia);
	if (testaPertence(registro[tokenProximo].stringvalor,tokenPrimeiro,N)){
		casamento(registro[tokenProximo].stringvalor);
		if (testaPertence(registro[tokenProximo].stringvalor,tokenPrimeiro,N))
					expr();
	}
	//verificaEntrada(tokenSequencia,tokenPrimeiro);
}

void casamento(char *tokenEsperado){
	if (registro[tokenProximo].stringvalor==tokenEsperado){
		printf("token atual ok: %s\n",registro[tokenProximo].stringvalor);
		tokenProximo++;
		printf("token proximo: %s\n",registro[tokenProximo].stringvalor);
	}
	else{
		printf("erro! %s token errado", tokenEsperado);
		tokenProximo++;
	}
}


void soma(){
	char *tokenPrimeiro[] = {"+","-"};
	N = 2;
	char *tokenSequencia[] = {"(","0","1","2","3","4","5","6","7","8","9"};
	M = 11;
	verificaEntrada(tokenPrimeiro, tokenSequencia);
	if (testaPertence(registro[tokenProximo].stringvalor,tokenPrimeiro,N)){
		casamento(registro[tokenProximo].stringvalor);
	}
	//verificaEntrada(tokenSequencia,tokenPrimeiro);
}


int testaPertence(char *c, char *conjunto[], int n){
		// Busca sequencial
		int flag=0;
		for(int i=0;i<n;i++)
			if (c==conjunto[i])
				flag = 1;
		return flag;
}


void erro(){
	printf("erro!\n");
	printf("----------------------\n");
	printf("token: %s\n",registro[tokenProximo].stringvalor);

}

void verificaEntrada(char *conjuntoPrimeiro[], char *conjuntoSequencia[]){
	if (!(testaPertence(registro[tokenProximo].stringvalor,conjuntoPrimeiro,N))){
		erro();
		tokenProximo++;
		//varreParaFrente(conjuntoPrimeiro , conjuntoSequencia);
	}
}

void varreParaFrente(char *conjuntoPrimeiro[], char *conjuntoSequencia[]){
	while (!(testaPertence(registro[tokenProximo].stringvalor,conjuntoPrimeiro,N)))
		while (!(testaPertence(registro[tokenProximo].stringvalor,conjuntoSequencia,M)))
			tokenProximo++;
}
