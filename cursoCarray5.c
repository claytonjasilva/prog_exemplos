/*Criar um vetor para armazenar as idades de um grupo de pessoas.  
O usuário deverá digitar quantas pessoas serão cadastradas.  
Escrever a média das idades.  */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int N;
    int *idade; // Declara um ponteiro de ponteiro de char
    float media = 0;
    
    // Entrada do numero de alunos da turma
    printf("Digite o número de alunos da turma: ");
    scanf("%d",&N);
    idade = (int *) malloc(N*sizeof(int)); // Aloca dinamicamente N endereços de char[10] 

    for (int i = 0;i<N;i++) {
        scanf("%i",idade);
        media += *idade;
        idade++;
    }
    printf("%f",media/N);

    return 0;
}
