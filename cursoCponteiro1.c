/* Ler dois números de ponto flutuante. 
Escrever a soma dos números e o endereço onde a soma está armazenada na memória. */

#include <stdio.h>

int main () {
    float num1, num2, soma;
    float *p;
    printf("Digite os numeros: ");
    scanf("%f %f",&num1,&num2);
    p = &soma;
    soma = num1 + num2;
    printf("O resultado da operacao eh %.2f\n",soma);
    printf("A soma esta armazenada em %p\n",p);
    return 0;
}

