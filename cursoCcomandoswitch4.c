#include <stdio.h>

int main(void){
    char caractere; // Caractere que determina a seleção da escolha

    float num1,num2; // Numeros para o bloco de instruções do A

    int N, k; // Numero de termos do B, k faz a contagem dos termos
    float S; // e S soma dos N termos - todos para o bloco B

    float numero; // Numero para o bloco de instruções D

    float vetor[10]; // Vetor para armazenar os numeros
    int j; // Indice dos elementos do vetor

    printf("Digite a opcao desejada: \n");
    caractere = getchar();
    printf("Voce escolheu a letra %c\n",caractere); 
    switch (caractere){
        case 'A':
            rotulo: printf("Digite dois numeros diferentes\n");
            scanf("%f %f",&num1,&num2);
            if (num1 == num2) 
                goto rotulo; // Remete ao rotulo se o usuario digitar numeros iguais
            else
                if (num1 > num2)
                    printf("O maior eh %.1f",num1); // Aproximei a saida uma casa decimal sem especificar o tamanho do campo
                else
                    printf("O maior eh %.1f",num2);
            break;
        case 'B':
            printf("Digite o numero de termos desejados\n");
            scanf("%i",&N);
            S = 0.0;
            k = 1;
            while (k <= N) { // Contagem e determinação da soma
                S += 1.0/(2.0*k); // Atribuição com incremento
                k++; // Incremento do késimo termo 
            }
            printf("O resultado da soma dos %i termos eh %.2f",N,S);
            break;
        case 'C':
            printf("letra %c",caractere);
            break;
        case 'D':
            while (1){
                printf("\nDigite um numero qualquer - 0 para interromper\n");
                scanf("%f",&numero);
                if (numero == 0.0) {
                    printf("Voce digitou 0 - Encerrando...\n");
                    break;
                }
                printf("O dobro do numero %.1f eh %.1f\n",numero,2*numero);
            }
            break;
        default:
            j = 0; //Inicializa o indice do vetor
            while (j < 10){
                printf("\nDigite o numero %i: ",j);
                scanf("%f",&vetor[j]);
                j++; // Incrementa o indice
            }
                
    }

    return 0;
}
