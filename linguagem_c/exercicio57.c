/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo57.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas union
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definição da union Dado
union Dado {
    char caractere;
    int inteiro;
    float flutuante;
};

int main() {
    // Declaração da union
    union Dado dado;

    // Solicita e exibe o valor para o membro char
    printf("Digite um valor do tipo char: ");
    scanf(" %c", &dado.caractere);
    printf("Como char: %c\n", dado.caractere);
    printf("Interpretação como int: %d\n", dado.inteiro);
    printf("Interpretação como float: %f\n\n", dado.flutuante);

    // Solicita e exibe o valor para o membro int
    printf("Digite um valor do tipo int: ");
    scanf("%d", &dado.inteiro);
    printf("Como int: %d\n", dado.inteiro);
    printf("Interpretação como char: %c\n", dado.caractere);
    printf("Interpretação como float: %f\n\n", dado.flutuante);

    // Solicita e exibe o valor para o membro float
    printf("Digite um valor do tipo float: ");
    scanf("%f", &dado.flutuante);
    printf("Como float: %f\n", dado.flutuante);
    printf("Interpretação como char: %c\n", dado.caractere);
    printf("Interpretação como int: %d\n", dado.inteiro);

    return 0;
}
