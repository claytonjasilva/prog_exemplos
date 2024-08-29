/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo36.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Funcao para calcular a soma dos termos positivos de uma serie aritmetica de razao 1
int soma_serie_aritmetica(int N) {
    return (N * (N + 1)) / 2;
}

// Funcao para calcular a soma dos divisores de um numero
int soma_divisores(int N) {
    int soma = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            soma += i;
        }
    }
    return soma;
}

// Funcao para calcular a soma dos quadrados de um numero ate 0
int soma_quadrados(int N) {
    int soma = 0;
    for (int i = N; i <= 0; i++) {
        soma += i * i;
    }
    return soma;
}

int main() {
    int N, resultado;

    // Leitura do numero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if (N >= 0 && N % 2 == 0) {
        // Numero par nao negativo: calcular a soma da serie aritmetica
        resultado = soma_serie_aritmetica(N);
        printf("A soma dos termos positivos da serie aritmetica ate %d eh: %d\n", N, resultado);
    } else if (N >= 0 && N % 2 != 0) {
        // Numero impar nao negativo: calcular a soma dos divisores
        resultado = soma_divisores(N);
        printf("A soma dos divisores de %d eh: %d\n", N, resultado);
    } else {
        // Numero negativo: calcular a soma dos quadrados ate 0
        resultado = soma_quadrados(N);
        printf("A soma dos quadrados dos numeros de %d ate 0 eh: %d\n", N, resultado);
    }

    return 0;
}
