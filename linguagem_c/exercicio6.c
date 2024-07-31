/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo6.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Expressões aritméticas, declaração de variáveis e atribuição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    int dias; //declara as variáveis - observe que a variável é inteira
    printf("Digite o numero de dias a converter: "); //interface com o usuário
    scanf("%d",&dias); //leitura do dado de entrada via console
    printf("\nO numero de anos e %d",dias/365); //como dias é int, a operação resulta inteira com truncamento da divisão
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}