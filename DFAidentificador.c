/*
 ============================================================================
 Nome      : DFAidentificador.c
 Autor     : Prof Clayton J A Silva - Compiladores princípios e práticas, Louden K
 Descrição : Implementa DFA identificador com variável de estado e testes
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NMAX 31

char letra[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char digito[] = {'0','1','2','3','4','5','6','7','8','9'};

// Prototipo de função para testar se o caractere pertence às expressões regulares
int testaPertence(char c, char conjunto[], int n);

int main(void) {
	int estado = 1, i=0; // estado 1 = start - início da varredura
						 // estado 2 = estado de aceitação
	                     // estado 3 = final da varredura
	                     // estado 4 = erro
	char *cadeia;
	int flag;

	cadeia = malloc(NMAX*sizeof(char));
	scanf("%s",cadeia);
	while ((estado==1)||(estado==2)){
		switch (estado) {
			case 1:
				flag = testaPertence(cadeia[i],letra,sizeof(letra));
				if (flag==1){
					i++;
					if (cadeia[i]=='/')
						estado = 3;
					else
						estado = 2;
				}
				else
					estado = 4;
				break;
			case 2:
				flag = testaPertence(cadeia[i],letra,sizeof(letra));
				if (flag==1){
					i++;
					if (cadeia[i]=='/')
						estado = 3;
				}
				else {
					flag = testaPertence(cadeia[i],digito,sizeof(digito));
					if (flag==1){
						i++;
						if (cadeia[i]=='/')
							estado = 3;
					}
					else
						estado = 4;
				break;
			}
		}
	}
	if (estado==3)
		printf("identificador valido\n");
	else
		printf("identificador invalido\n");

	printf("DIGITE ENTER PARA ENCERRAR ");
	getch();
	return EXIT_SUCCESS;
}

int testaPertence(char c, char conjunto[], int n){
	// Busca sequencial
	int flag=0;
	for(int i=0;i<n;i++)
		if (c==conjunto[i])
			flag = 1;
	return flag;
}
