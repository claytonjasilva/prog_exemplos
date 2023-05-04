/*Criar um vetor que armazene os seguintes nomes: 
"ana", "joao", "pedro", "carlos", "jose", "joaquim", "zenildo".  
Com o vetor criado, o usuario poderá digitar um nome, 
se o nome pertencer ao conjunto, o programa deverá responder "NOME ENCONTRADO!".  
Se o nome digitado pelo usuário não pertencer ao conjunto, 
o programa deverá responder "NOME NAO PERTENCE A RELACAO!".*/

#include <stdio.h>
#include <string.h> // Biblioteca de funcoes de string

#define DIM 7

int main () {
    char *p[DIM] = {"ana", "joao", "pedro", "carlos", "jose", "joaquim", "zenildo"}; // Declara vetor de ponteiro
    char nome[10];
    int i;


    printf("Digite o nome: ");
    scanf("%s",nome);

    for (i = 0;i<DIM;i++)
        if (strcmp(nome,p[i]) == 0) {
            printf("NOME ENCONTRADO");
            break;
        }
    if (i == DIM)
          printf("NOME NAO PERTENCE A RELACAO");    

    return 0;
}
