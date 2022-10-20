/*
 ============================================================================
 Name        : analiseIF1.c
 Author      : cjas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_REG 50
#define PILHA_TAM 50

typedef struct
	{ int tokenval;
	  char *stringvalor;
	} TokenRegistro;
TokenRegistro registro[MAX_REG];

typedef struct
	{
	int topo;
	char *items[PILHA_TAM];
	} pilha;
pilha *pilhaArvore;

int tokenProximo = 0;
char *idt[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
char *oplog[] = {">","<","==","!="};
char *oparitm[] = {"+","-","*","/"};

int arrayToken(void); // Simula o array de token
int push(pilha *p,char *x);
char* pop(pilha *p);
void casamento(char *tokenEsperado);
void erro(void);
int testaTopoToken(char *abstracao, char *token);
int gera(char *c);
int verificaProducao();

int main(void) {
	int j;
	j = arrayToken(); // Carrega o array de token da análise léxica
	registro[j].tokenval=1;
	registro[j].stringvalor = "$"; // Insere símbolo de topo após a cadeia de entrada
	// Análise sintática
	// Carrega a pilha de análise sintática - ação inicial
	push(pilhaArvore,"$"); // "$" marca o final da pilha sintática
	push(pilhaArvore,"declaracao");
	push(pilhaArvore,"else");
	push(pilhaArvore,"declaracao");
	push(pilhaArvore,")");
	push(pilhaArvore,"exp");
	push(pilhaArvore,"(");
	push(pilhaArvore,"if"); // topo da pilha sintática

	// Atualiza a pilha e verifica os erros
	while ((strcmp(pilhaArvore->items[pilhaArvore->topo],"$")!=0) && (strcmp(registro[tokenProximo].stringvalor,"$")!=0)){
		if (strcmp(pilhaArvore->items[pilhaArvore->topo],registro[tokenProximo].stringvalor)==0){
			casamento(registro[tokenProximo].stringvalor);
			pop(pilhaArvore);
		}
		else {
			j = testaTopoToken(pilhaArvore->items[pilhaArvore->topo],registro[tokenProximo].stringvalor);
			if (j==0)
				erro();
		}
	}

	//}
	printf("DIGITE ENTER PARA ENCERRAR ");
	scanf("%i",&j);
	return EXIT_SUCCESS;
}

int arrayToken(void){
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
	return 17;
}

int push(pilha *p,char *x){
	p->items[++(p->topo)]=x;
	return 1;
}

char* pop(pilha *p){
	return p->items[p->topo--];
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

void erro(void){
	printf("erro!\n");
	printf("%s\n",registro[tokenProximo].stringvalor);
	tokenProximo++; // Prossegue na análise
}

int testaTopoToken(char *abstracao, char *token){
	int flag = 0;
	if ((strcmp(abstracao,"declaracao")==0)||(strcmp(abstracao,"exp")==0)){
		gera(abstracao);
		flag = 1;
	}
	else {
		if (strcmp(abstracao,"idt")==0){
			flag = 1;
			for (int i=0;i<26;i++)
				if (strcmp(token,idt[i])==0){
					pop(pilhaArvore);
					push(pilhaArvore,token);
				}
		}
		if (strcmp(abstracao,"oplog")==0){
			flag = 1;
			for (int i=0;i<4;i++)
				if (strcmp(token,oplog[i])==0){
					pop(pilhaArvore);
					push(pilhaArvore,token);
				}
		}
		if (strcmp(abstracao,"oparitm")==0){
			flag = 1;
			for (int i=0;i<26;i++)
				if (strcmp(token,oparitm[i])==0){
					pop(pilhaArvore);
					push(pilhaArvore,token);
				}
		}
	}
	return flag;
}


int gera(char *c){
	int flag = 0;
	if (strcmp(c,"declaracao")==0){
		if (strcmp(pilhaArvore->items[pilhaArvore->topo-1],"else")!=0){
			pop(pilhaArvore);
			push(pilhaArvore,"idt");
			push(pilhaArvore,"=");
			push(pilhaArvore,"idt");
			push(pilhaArvore,";");
			flag = 1;
		}
		else {
				pop(pilhaArvore);
				push(pilhaArvore,"idt");
				push(pilhaArvore,"=");
				push(pilhaArvore,"idt");
				flag = verificaProducao();
			}
	}
	if (strcmp(c,"exp")==0){
		pop(pilhaArvore);
		push(pilhaArvore,"idt");
		push(pilhaArvore,"oplog");
		push(pilhaArvore,"idt");
		flag = 1;
	}
	return flag;
}

int verificaProducao(){
	int flag = 0;

	if (strcmp(registro[tokenProximo+3].stringvalor,";")==0){ // abstração idt = idt
		push(pilhaArvore,";");
		flag = 1;
	}
	if (strcmp(registro[tokenProximo].stringvalor,";")==0){ //abstração declaração;
		push(pilhaArvore,";");
		flag = 1;
	}
	if (strcmp(registro[tokenProximo+3].stringvalor,"+")==0|| // abstração declaração oparitm idt
			strcmp(registro[tokenProximo+3].stringvalor,"-")==0||
			strcmp(registro[tokenProximo+3].stringvalor,"*")==0||
			strcmp(registro[tokenProximo+3].stringvalor,"/")==0){
		push(pilhaArvore,"oparitm");
		push(pilhaArvore,"idt");
		push(pilhaArvore,"declaracao");
		flag = 1;
	}

	return flag;
}
