/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo45.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
    int cidades = 20;
    int intervalos = 12;  // Intervalos de 2h, ou seja, 12 medições entre 2h e 24h
    float temperaturas[20][13];  // 12 colunas para medições + 1 coluna para a média

    // Leitura das temperaturas para cada cidade
    for (int i = 0; i < cidades; i++) {
        float soma = 0.0;

        printf("Cidade %d:\n", i + 1);
        for (int j = 0; j < intervalos; j++) {
            printf("Digite a temperatura para %d horas: ", (j + 1) * 2);
            scanf("%f", &temperaturas[i][j]);
            soma += temperaturas[i][j];
        }

        // Calcula a média das temperaturas e armazena na última coluna da matriz
        temperaturas[i][intervalos] = soma / intervalos;
    }

    // Exibição das temperaturas e da média para cada cidade
    printf("\nTemperaturas e medias para cada cidade:\n");
    for (int i = 0; i < cidades; i++) {
        printf("Cidade %d: ", i + 1);
        for (int j = 0; j < intervalos; j++) {
            printf("%.1f ", temperaturas[i][j]);
        }
        printf(" | Media: %.1f\n", temperaturas[i][intervalos]);
    }

    return 0;
}
