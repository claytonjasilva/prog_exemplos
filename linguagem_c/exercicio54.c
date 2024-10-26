/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo54.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas struct
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

struct Aluno {
    char nome[30];
    float nota;
};

float calculaMedia(struct Aluno alunos[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += alunos[i].nota;
    }
    return soma / n;
}

int main() {
    struct Aluno alunos[3];
    
    // Solicita os dados dos alunos
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    // Calcula e exibe a média
    float media = calculaMedia(alunos, 3);
    printf("Media das notas: %.2f\n", media);

    return 0;
}
