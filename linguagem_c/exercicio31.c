/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo31.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <math.h>

int fat(int num); // prototipando a função

int main () {
    float x, S=0;
    int N;
    printf("Digite o expoente: ");
    scanf("%f",&x);
    printf("\nDigite o numero de termos de aproximacao: ");
    scanf("%i",&N);
    for (int i=0;i<N;i++)
        S += pow(x,i) / fat(i); // Chama a função fat
    printf("A exponencial eh %f",S);
    return 0;
}

int fat(int num){
    if (num == 0)
        return 1;
    else 
        return num * fat(num-1); // C admite recursividade em função
}