// Versão 1 da solução do problema

#include <stdio.h>


int main(void){
    char caractere; // Caractere que determina a seleção da escolha
    printf("Digite a opcao desejada: \n");
    caractere = getchar();
    printf("Voce escolheu a letra %c\n",caractere); 
    switch (caractere){
        case 'A':
            printf("letra %c",caractere);
            break;
        case 'B':
            printf("letra %c",caractere);
            break;
        case 'C':
            printf("letra %c",caractere);
            break;
        case 'D':
            printf("letra %c",caractere);
            break;
        default:
            printf("letra %c",caractere);

    }

    return 0;
}
