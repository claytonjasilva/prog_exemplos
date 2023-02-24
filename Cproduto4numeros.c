#include <stdio.h>
/* Referencia: Aprenda a Programar em C, C++ e C#, de Hickson, R.*/
void mult(float a, float b,float c,float d)
{
    printf("%f",a*b*c*d); /* Multiplica 4 números */
}

void main()
{
    float x,y;
    x=23.5;
    y=12.9;
    mult(x,y,3.87,2);
}
