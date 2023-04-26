// Elaborar um código em C para ler um conjunto de números não nulos e escrever somente os números pares. 
// Caso o número lido não seja par escrever a mensagem "numero impar".
// O usuário poderá interromper o programa digitando o número 0. 

#include <stdio.h>

int main () {
    int numero;
    do {
        printf("Digite o numero inteiro nao nulo - 0 para sair: ");
        scanf("%d",&numero);
        if (numero == 0)
            break;
        if (numero % 2 == 0) 
            printf("O numero eh %d\n",numero);
        else
            printf("numero impar\n");
    } while (1);

    return 0;
}

