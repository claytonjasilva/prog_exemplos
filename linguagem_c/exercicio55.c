/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo55.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas union
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definição da union Medida
union Medida {
    int metros;        // Campo para valor em metros
    float centimetros; // Campo para valor em centímetros
};

int main() {
    // Declaração da union
    union Medida medida;

    // Inicializa o campo metros
    medida.metros = 10;
    printf("Medida em metros: %d\n", medida.metros);

    // Inicializa o campo centimetros (sobrescreve metros devido ao compartilhamento de memória)
    medida.centimetros = 1000.0;
    printf("Medida em centimetros: %.2f\n", medida.centimetros);

    // Exibe novamente o campo metros após modificar centimetros
    printf("Valor de metros após modificar centimetros: %d\n", medida.metros); // Esse valor será incoerente devido ao compartilhamento de memória

    return 0;
}
