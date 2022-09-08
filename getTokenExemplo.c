/*
 ============================================================================
 Nome      : TokenArray.c
 Autor     : Prof Clayton J A Silva - Compiladores princípios e práticas, Louden K
 Descrição : Implementa função getToken()
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_REG 40
#define NMAX 31

typedef enum // Definem os token da linguagem TINY adaptada
	{RESERVADA,SIMBOLO,OUTRO}
	TokenTipo;

typedef struct
	{ TokenTipo tokenVal;
	  char *stringValor;
	  int tokenProxPos;
	} TokenRegistro;

TokenRegistro registro[MAX_REG];

TokenTipo getToken(int pos,char linha[NMAX], int nToken, int k);

int main(void) {
	char *cadeia;
	int prox=0, nToken=0, tamCadeia;

	cadeia = malloc(NMAX*sizeof(char));
	fgets(cadeia,NMAX,stdin);
	tamCadeia = strlen(cadeia);

	while (prox<tamCadeia){
		getToken(prox,cadeia,nToken,tamCadeia);
		prox = registro[nToken].tokenProxPos;
		nToken++;
	}

	printf("===================================\n");
	for (int i=0;i<nToken;i++){
		printf("%i\n",registro[i].tokenVal);
		printf("%s\n",registro[i].stringValor);
		printf("%i\n",registro[i].tokenProxPos);
		printf("===================================\n");
	}


	printf("DIGITE ENTER PARA ENCERRAR ");
	getch();
	return EXIT_SUCCESS;
}

TokenTipo getToken(int pos,char linha[NMAX], int nToken, int k){
	int i,j=0;
	char tokenValor[NMAX];

	for (i=pos;i<k;i++){
		if (linha[i]!=' '){
			tokenValor[j] = linha[i];
			j++;
		}
		else break;
	}
	tokenValor[j] = '\0';
	registro[nToken].tokenVal = SIMBOLO;
	registro[nToken].stringValor = malloc(20*sizeof(char));
	strcpy(registro[nToken].stringValor,tokenValor);
	registro[nToken].tokenProxPos = i+1;

	return registro[nToken].tokenVal;
}
