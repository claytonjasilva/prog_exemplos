/*Criar um vetor que armazene os seguintes nomes: 
"ana", "joao", "pedro", "carlos", "jose", "joaquim", "zenildo".  
Com o vetor criado, o usuario poderá digitar um nome, 
se o nome pertencer ao conjunto, o programa deverá responder "NOME ENCONTRADO!".  
Se o nome digitado pelo usuário não pertencer ao conjunto, 
o programa deverá responder "NOME NAO PERTENCE A RELACAO!".*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int N;
    char **ap; // Declara um ponteiro de ponteiro de char
    
    // Entrada do numero de alunos da turma
    printf("Digite o número de alunos da turma: ");
    scanf("%d",&N);
    ap = (char **) malloc(N*sizeof(char *)); // Aloca dinamicamente N endereços de char[10] 

    for (int i = 0;i<N;i++) {
        scanf("%s",ap);
        ap++;
    }
    ap = ap - N;
    printf("%s",ap);
    
    return 0;
}
