/*
 ============================================================================
 Name        : arvoreExemplo.c
 Author      : cjas
 Version     :
 Copyright   : Your copyright notice
 Description : Gera exemplo de árvore binária para armazenamento de elementos da análise sintática
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Criação de um tipo nó e um ponteiro de nó
struct nodetype {
	char info;
	struct nodetype *left;
	struct nodetype *right;
	struct nodetype *father;
};
typedef struct nodetype *NODEPTR;


//
NODEPTR getnode(){
	NODEPTR p;
	p = (NODEPTR) malloc(sizeof(struct nodetype));
	return(p);
}

NODEPTR maketree(char x){
	NODEPTR p;
	p = getnode();
	p->info = x;
	p->left = NULL;
	p->right = NULL;
	p->father = NULL;
	return(p);
}

void setleft(NODEPTR p, char x){
	if (p == NULL)
		printf("insercao vazia\n");
	else if (p->left != NULL)
			printf("insercao incorreta\n");
		 else
			p->left = maketree(x);
}

void setright(NODEPTR p, char x){
	if (p == NULL)
		printf("insercao vazia\n");
	else if (p->right != NULL)
			printf("insercao incorreta\n");
		 else
			p->right = maketree(x);
}

int main(void) {
	int j, i;
	NODEPTR no[9];
	no[0] = maketree('A');
	setleft(no[0],'B');
	no[1] = no[0]->left;
	setleft(no[1],'D');
	no[3] = no[1]->left;
	setright(no[1],'E');
	no[4] = no[1]->right;
	setleft(no[4],'G');
	no[6] = no[4]->left;
	setright(no[0],'C');
	no[2] = no[0]->right;
	setleft(no[2],'F');
	no[5] = no[2]->left;
	setleft(no[5],'H');
	no[7] = no[5]->left;
	setright(no[5],'I');
	no[8] = no[5]->right;

	for (i=0;i<9;i++)
		printf("%c\n",no[i]->info);


	scanf("%i",&j);
	return EXIT_SUCCESS;
}
