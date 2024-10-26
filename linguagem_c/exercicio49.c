/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo49.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas struct
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

int main() {
    struct Livro livro1;

    // Entrada de dados pelo usuário
    printf("Digite o titulo do livro: ");
    gets(livro1.titulo);
    printf("Digite o autor do livro: ");
    gets(livro1.autor);
    printf("Digite o ano do livro: ");
    scanf("%d", &livro1.ano);

    // Exibe os dados do livro
    printf("Titulo: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano: %d\n", livro1.ano);

    return 0;
}
