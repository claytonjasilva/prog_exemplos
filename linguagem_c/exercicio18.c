/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo18.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    char nome[15];
    float peso, altura, imc;
 
    printf("Pessoa 1\n");
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
    if (imc<20)
        printf("valor baixo, imc = %.1f",imc);
    else if (imc>22)
        printf("valor alto, imc = %.1f",imc);

    printf("\nPessoa 2\n");
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
    if (imc<20)
        printf("valor baixo, imc = %.1f",imc);
    else if (imc>22)
        printf("valor alto, imc = %.1f",imc);

    printf("\nPessoa 3\n");
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
    if (imc<20)
        printf("valor baixo, imc = %.1f",imc);
    else if (imc>22)
        printf("valor alto, imc = %.1f",imc);

    return 0;
}