/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo16.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    int x, y; //declara as variaveis
    printf("\nEntre x, y: ");
    scanf("%i %i", &x, &y);
    if (x>y)
        printf("O maior numero e %i", x);
    else 
        printf("O maior numero e %i", y);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}