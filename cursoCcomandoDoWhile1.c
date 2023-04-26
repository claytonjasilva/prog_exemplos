// O programa le um número inteiro nao negativo
// Determina a soma de todos os numeros inferiores ao numero lido

#include <stdio.h>

int main () {
    int numero, cont = 0, S = 0;
    printf("Digite o numero inteiro nao negativo: ");
    scanf("%d",&numero);
    do {
        S += cont;
        cont++;
    } while (cont<numero);
    printf("\nA soma dos numeros eh %d\n",S);

    return 0;
}
