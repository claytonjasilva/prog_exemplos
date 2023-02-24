#include <stdio.h>
/* Referencia: Aprenda a Programar em C, C++ e C#, de Hickson, R.*/
void square(int x) /* Calcula o quadrado de x */
{
    printf("O quadrado e %d",(x*x));
}

void main()
{
    int num;
    printf("Entre com um numero: ");
    scanf("%d",&num);
    printf("\n\n");
    square(num);
}
