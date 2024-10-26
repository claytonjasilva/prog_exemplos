/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo51.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas struct
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

struct Endereco {
    char rua[50];
    char cidade[30];
    char cep[10];
};

struct Pessoa {
    char nome[30];
    int idade;
    struct Endereco endereco;
};

int main() {
    struct Pessoa pessoa;

    // Entrada de dados da pessoa
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
    printf("Digite a rua: ");
    scanf("%s", pessoa.endereco.rua);
    printf("Digite a cidade: ");
    scanf("%s", pessoa.endereco.cidade);
    printf("Digite o CEP: ");
    scanf("%s", pessoa.endereco.cep);

    // Exibe os dados da pessoa
    printf("\nNome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco:\nRua: %s\nCidade: %s\nCEP: %s\n", pessoa.endereco.rua, pessoa.endereco.cidade, pessoa.endereco.cep);

    return 0;
}
