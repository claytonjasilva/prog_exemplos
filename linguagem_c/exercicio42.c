/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo42.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_pessoas;
    int *idades;
    int soma_idades = 0;
    float media_idades;

    // Leitura do número de pessoas
    printf("Digite o numero de pessoas: ");
    scanf("%d", &num_pessoas);

    // Alocação dinâmica de memória para o vetor de idades
    idades = (int*) malloc(num_pessoas * sizeof(int));

    // Verificação de sucesso na alocação de memória
    if (idades == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;  // Encerra o programa com erro
    }

    // Leitura das idades e cálculo da soma das idades
    for (int i = 0; i < num_pessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma_idades += idades[i];
    }

    // Cálculo da média das idades
    media_idades = (float)soma_idades / num_pessoas;

    // Exibição da média das idades
    printf("A media das idades e: %.2f\n", media_idades);

    // Liberação da memória alocada
    free(idades);

    return 0;
}
