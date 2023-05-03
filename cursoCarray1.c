/*Escrever um código em C para ler 10 números quaisquer, 
determinar e escrever a média dos números lidos. .*/

#include <stdio.h>
#define N 10

int main () {
    float numero[N]; //Declara o array numero de dimensão 10
    float media = 0;
    // Leitura dos dados
    for (int i = 0;i<N;i++) {
        printf("\nDigite um numero: ");
        scanf("%f",&numero[i]);
        media += numero[i]/N;
    }
    // Apresentação do relatório
    printf("\n\nRelatorio:\n");
    for (int i = 0;i<N;i++)
        printf("Numero %i: %f; media %f\n",i,numero[i],media);

    return 0;
}
