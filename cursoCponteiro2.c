/* Escrever um código em C para ler e armazenar 10 números de ponto flutuante.  
Escrever cada um dos números lidos seguidos da média. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    float media = 0;
    float *p;
    p = (float *) malloc(10*sizeof(float)); // Aloca 10 dinamicamente endereços de float 
    for (int i = 0;i<10;i++){
        printf("\nnumero: ");
        scanf("%f",p);
        media += *p;
        p++;
    }
    media = media / 10;
    p -= 10; // Retorna ao primeiro endereço dos números de ponto flutuante
    for (int i = 0;i<10;i++){
        printf("%f e %f\n",*p, media);
        p++; // Incrementa para o próximo endereço do dado lido
    }

    return 0;
}
