/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo37.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Funcao para calcular o IMC
float calcular_imc(float peso, float altura) {
    return peso / (altura * altura);
}

// Funcao para recomendar exercicios com base na idade
void recomendar_exercicio(int idade, char recomendacao[]) {
    if (idade > 60) {
        sprintf(recomendacao, "Exercicio do tipo A");
    } else if (idade >= 40) {
        sprintf(recomendacao, "Exercicio do tipo B");
    } else if (idade >= 15) {
        sprintf(recomendacao, "Exercicio do tipo C");
    } else {
        sprintf(recomendacao, "Exercicio do tipo D");
    }
}

// Funcao para recomendar dieta com base no IMC
void recomendar_dieta(float imc, char recomendacao[]) {
    if (imc > 25) {
        sprintf(recomendacao, "Dieta magra");
    } else if (imc >= 19) {
        sprintf(recomendacao, "Dieta normal");
    } else {
        sprintf(recomendacao, "Dieta gorda");
    }
}

int main() {
    char nome[50], recomendacao_exercicio[50], recomendacao_dieta[50];
    int idade;
    float peso, altura, imc;

    // Leitura dos dados da pessoa
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove a nova linha do final do nome

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcular o IMC
    imc = calcular_imc(peso, altura);

    // Obter recomendacoes
    recomendar_exercicio(idade, recomendacao_exercicio);
    recomendar_dieta(imc, recomendacao_dieta);

    // Exibir as recomendacoes
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("IMC: %.2f\n", imc);
    printf("Recomendacao de exercicio: %s\n", recomendacao_exercicio);
    printf("Recomendacao de dieta: %s\n", recomendacao_dieta);

    return 0;
}
