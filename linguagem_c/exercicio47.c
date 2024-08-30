/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo47.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
    int i, j;
    float pesos[10][12];  // Matriz para armazenar os pesos
    float (*p)[12] = pesos;  // Ponteiro para a matriz de pesos

    // Leitura dos pesos das 10 pessoas de janeiro a dezembro
    for (i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        for (j = 0; j < 12; j++) {
            printf("Digite o peso para o mes %d: ", j + 1);
            scanf("%f", &p[i][j]);  // Usando o ponteiro para acessar a matriz
        }
    }

    // Exibição dos pesos armazenados
    printf("\nPesos das 10 pessoas de janeiro a dezembro:\n");
    for (i = 0; i < 10; i++) {
        printf("Pessoa %d: ", i + 1);
        for (j = 0; j < 12; j++) {
            printf("%.1f ", p[i][j]);  // Usando o ponteiro para acessar a matriz
        }
        printf("\n");
    }

    return 0;
}
