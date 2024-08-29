/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo38.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <math.h>

// Funções para realizar as operações solicitadas
double soma_quadrados(double a, double b) {
    return (a * a) + (b * b);
}

double soma_cubos(double a, double b) {
    return (a * a * a) + (b * b * b);
}

double quadrado_diferenca(double a, double b) {
    return (a - b) * (a - b);
}

double quadrado_soma(double a, double b) {
    return (a + b) * (a + b);
}

double cubo_diferenca(double a, double b) {
    return (a - b) * (a - b) * (a - b);
}

double cubo_soma(double a, double b) {
    return (a + b) * (a + b) * (a + b);
}

int main() {
    double a, b, resultado;
    char operacao[6];

    // Primeira repetição: o usuário digita A, B e a operação
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite a operacao desejada ('sq', 'sc', 'qdif', 'qsoma', 'cdif', 'csoma', 'nop'): ");
    scanf("%s", operacao);

    // Executa a operação inicial
    if (strcmp(operacao, "sq") == 0) {
        resultado = soma_quadrados(a, b);
    } else if (strcmp(operacao, "sc") == 0) {
        resultado = soma_cubos(a, b);
    } else if (strcmp(operacao, "qdif") == 0) {
        resultado = quadrado_diferenca(a, b);
    } else if (strcmp(operacao, "qsoma") == 0) {
        resultado = quadrado_soma(a, b);
    } else if (strcmp(operacao, "cdif") == 0) {
        resultado = cubo_diferenca(a, b);
    } else if (strcmp(operacao, "csoma") == 0) {
        resultado = cubo_soma(a, b);
    } else if (strcmp(operacao, "nop") == 0) {
        printf("Operacao 'nop' escolhida. O programa sera encerrado.\n");
        return 0;
    } else {
        printf("Operacao invalida. Programa encerrado.\n");
        return 1;
    }

    printf("Resultado inicial: %.2lf\n", resultado);

    // Repetições seguintes
    while (1) {
        printf("\nDigite um novo numero: ");
        scanf("%lf", &a);
        printf("Digite a nova operacao ('sq', 'sc', 'qdif', 'qsoma', 'cdif', 'csoma', 'nop'): ");
        scanf("%s", operacao);

        if (strcmp(operacao, "sq") == 0) {
            resultado = soma_quadrados(resultado, a);
        } else if (strcmp(operacao, "sc") == 0) {
            resultado = soma_cubos(resultado, a);
        } else if (strcmp(operacao, "qdif") == 0) {
            resultado = quadrado_diferenca(resultado, a);
        } else if (strcmp(operacao, "qsoma") == 0) {
            resultado = quadrado_soma(resultado, a);
        } else if (strcmp(operacao, "cdif") == 0) {
            resultado = cubo_diferenca(resultado, a);
        } else if (strcmp(operacao, "csoma") == 0) {
            resultado = cubo_soma(resultado, a);
        } else if (strcmp(operacao, "nop") == 0) {
            printf("Operacao 'nop' escolhida. O programa sera encerrado.\n");
            break;
        } else {
            printf("Operacao invalida. Programa encerrado.\n");
            return 1;
        }

        printf("Novo resultado: %.2lf\n", resultado);
    }

    printf("Ultimo valor resultante: %.2lf\n", resultado);

    return 0;
}
