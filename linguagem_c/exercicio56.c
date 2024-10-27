/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo56.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas union
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definição da union Numero
union Numero {
    int inteiro;
    float flutuante;
    double duplo;
};

int main() {
    // Declaração da union
    union Numero numero;

    // Solicita e exibe o valor de int
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero.inteiro);
    printf("Valor como int: %d\n", numero.inteiro);
    printf("Interpretação como float: %f\n", numero.flutuante);
    printf("Interpretação como double: %f\n\n", numero.duplo);

    // Solicita e exibe o valor de float
    printf("Digite um valor float: ");
    scanf("%f", &numero.flutuante);
    printf("Valor como float: %f\n", numero.flutuante);
    printf("Interpretação como int: %d\n", numero.inteiro);
    printf("Interpretação como double: %f\n\n", numero.duplo);

    // Solicita e exibe o valor de double
    printf("Digite um valor double: ");
    scanf("%lf", &numero.duplo);
    printf("Valor como double: %f\n", numero.duplo);
    printf("Interpretação como int: %d\n", numero.inteiro);
    printf("Interpretação como float: %f\n", numero.flutuante);

    return 0;
}
