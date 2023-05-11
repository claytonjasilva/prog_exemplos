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
    char nome[DIM][10]={"ana", "joao", "pedro", "carlos", "jose", "joaquim", "zenildo"}; // Inicializa o vetor de strings
    char nome_digitado[10]; // Declara a string a pesquisar
    int i;
   
    // Leitura do dado
    printf("\nDigite um nome: ");
    scanf("%s",nome_digitado);

    // Pesquisa dado
    for (i = 0;i<DIM;i++)
        if (strcmp(nome[i],nome_digitado) == 0) { // Compara cada string do vetor de strings com a string digitada
            printf("NOME ENCONTRADO");
            break; // Torna a pesquisa mais eficiente, pois interrompe o loop quando encontrar o nome
        }
    if (i == DIM)
        printf("NOME NAO PERTENCE A RELACAO");

    return 0;
}
