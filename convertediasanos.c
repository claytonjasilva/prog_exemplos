#include <stdio.h>
/* Referencia: Aprenda a Programar em C, C++ e C#, de Hickson, R.*/
void main()
{
    int Dias; /* Declaração de variáveis */
    float Anos;
    printf("Numero de dias: "); /* Efetua a Entrada de Dados*/
    scanf("%d",&Dias);
    Anos = Dias/365.25; /* Converte o número de dias em anos */
    printf("\n\n%d dias equivalem a %f anos.\n",Dias,Anos);
} 
