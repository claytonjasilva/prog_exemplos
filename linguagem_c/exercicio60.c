/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo60.c
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
    // Declaração de um array de unions do tipo Numero
    union Numero numeros[3];

    // Armazenando valores em diferentes formatos
    numeros[0].inteiro = 10;        // Armazena um inteiro
    numeros[1].flutuante = 3.14f;    // Armazena um float
    numeros[2].duplo = 42.195;       // Armazena um double

    // Exibe os valores no array e interpreta em diferentes formatos
    printf("Elemento 0:\n");
    printf("Inteiro: %d\n", numeros[0].inteiro);
    printf("Interpretação como float: %f\n", numeros[0].flutuante);
    printf("Interpretação como double: %f\n\n", numeros[0].duplo);

    printf("Elemento 1:\n");
    printf("Float: %f\n", numeros[1].flutuante);
    printf("Interpretação como int: %d\n", numeros[1].inteiro);
    printf("Interpretação como double: %f\n\n", numeros[1].duplo);

    printf("Elemento 2:\n");
    printf("Double: %f\n", numeros[2].duplo);
    printf("Interpretação como int: %d\n", numeros[2].inteiro);
    printf("Interpretação como float: %f\n", numeros[2].flutuante);

    return 0;
}
