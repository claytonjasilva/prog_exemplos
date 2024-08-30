/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo46.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
    // Declaração da matriz de duas linhas e cinco colunas
    char vogais[2][5] = {
        {'a', 'e', 'i', 'o', 'u'}, // Primeira linha: vogais em minúscula
        {'A', 'E', 'I', 'O', 'U'}  // Segunda linha: vogais em maiúscula
    };

    // Exibição das vogais armazenadas na matriz
    printf("Vogais em minuscula:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c ", vogais[0][i]);
    }

    printf("\n\nVogais em maiuscula:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c ", vogais[1][i]);
    }

    printf("\n");

    return 0;
}
