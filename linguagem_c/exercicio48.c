/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo48.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas struct
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

struct Carro {
    char marca[20];
    int ano;
    float preco;
};

int main() {
    struct Carro carro1 = {"Toyota", 2020, 55000.0};

    // Exibe os dados do carro
    printf("Marca: %s\n", carro1.marca);
    printf("Ano: %d\n", carro1.ano);
    printf("Preco: %.2f\n", carro1.preco);

    return 0;
}
