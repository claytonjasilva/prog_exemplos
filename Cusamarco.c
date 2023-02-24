#include <stdio.h>
#define SOMA x+y /* Cria a macro */
main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    z=SOMA;
    printf("A soma de x e y e %d",z);
}
