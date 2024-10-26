/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo52.c
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

void exibeCarro(struct Carro c) {
    printf("Marca: %s\n", c.marca);
    printf("Ano: %d\n", c.ano);
    printf("Preco: %.2f\n", c.preco);
}

int main() {
    struct Carro carro1 = {"Ford", 2018, 45000.0};

    // Chama a função que exibe os dados do carro
    exibeCarro(carro1);

    return 0;
}
