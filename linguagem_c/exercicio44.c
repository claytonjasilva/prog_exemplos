/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo44.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
    int matriz[20][10];
    int valor = 1;

    // Preenchimento da matriz linha por linha
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    // Exibição da matriz
    printf("Matriz 20x10 preenchida com valores de 1 a 200:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
