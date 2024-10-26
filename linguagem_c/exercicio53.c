/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo53.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas struct
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
};

void atualizaPreco(struct Produto *p, float novoPreco) {
    p->preco = novoPreco;  // Atualiza o preco
}

int main() {
    struct Produto prod = {"Celular", 1500.0};

    // Exibe o preço antes da atualização
    printf("Produto: %s\nPreco: %.2f\n", prod.nome, prod.preco);

    // Atualiza o preço
    atualizaPreco(&prod, 1200.0);

    // Exibe o preço atualizado
    printf("Preco atualizado: %.2f\n", prod.preco);

    return 0;
}
