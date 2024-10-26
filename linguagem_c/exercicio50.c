/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo50.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas struct
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

struct Aluno {
    char nome[30];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];

    // Entrada de dados para cada aluno
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    // Exibe os dados dos alunos
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}
