/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo39.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n <= 1) {
        return 1; // Caso base: fatorial de 0 ou 1 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

// Função para calcular o valor de e^x usando a série de Taylor
double calcular_elevado_x(double x, int termos) {
    double resultado = 1.0; // Iniciando com o primeiro termo da série que é 1
    double potencia_x = x;  // Variável para armazenar as potências de x

    for (int i = 1; i < termos; i++) {
        resultado += potencia_x / fatorial(i);
        potencia_x *= x; // Calcula x^(i+1) para o próximo termo
    }

    return resultado;
}

int main() {
    double x;
    int termos;

    // Leitura dos valores de entrada
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o numero de termos desejado na serie: ");
    scanf("%d", &termos);

    // Calcula e exibe o resultado de e^x
    double resultado = calcular_elevado_x(x, termos);
    printf("O valor de e^%.2lf calculado com %d termos e: %.10lf\n", x, termos, resultado);

    return 0;
}
