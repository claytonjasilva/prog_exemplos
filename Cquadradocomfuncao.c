#include <stdio.h>
/* Referencia: Aprenda a Programar em C, C++ e C#, de Hickson, R.*/
/* Quadrado com função */

void sqr(int x); /* Prototipando a função */

void main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    sqr(num); /* a função sqrt recebe a variável num do programa principal */
}

void sqr(int x)/* x é um parâmetro recebido do programa principal
               - no caso, x vale o conteúdo de num*/
{
    printf("%d ao quadrado e %d ",x,x*x);
}
