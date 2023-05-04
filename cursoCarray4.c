/*Criar um vetor para armazenar os nomes de alunos de uma turma de aula.   
O usuário deverá digitar quantos alunos a turma possui, antes de informar os nomes do aluno da turma.
Ao final, o programa deve escrever o primeiro nome digitado pelo usuário.*/

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
