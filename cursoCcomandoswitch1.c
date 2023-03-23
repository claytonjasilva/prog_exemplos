#include <stdio.h>

int main(void){
    char caractere; // Caractere que determina a seleção da escolha
    float num1,num2; // Numeros para o bloco de instruções do A
    printf("Digite a opcao desejada: \n");
    caractere = getchar();
    printf("Voce escolheu a letra %c\n",caractere); 
    switch (caractere){
        case 'A':
            rotulo: printf("Digite dois numeros diferentes\n"); // Define o rotulo na instrução
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
