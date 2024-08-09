/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo14.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    int x, y, expressao; //declara as variaveis
    printf("Determina o valor da expressao a");
    printf("\nEntre x: ");
    scanf("%i", &x);
    expressao = (2>x) && (3 + 4 == 7);
    printf("O resultado da expressao a e %i", expressao);
    printf("\nDetermina o valor da expressao b");
    printf("\nEntre x, y: ");
    scanf("%i %i", &x, &y);
    expressao = (x>y) || (x + y == 6);
    printf("O resultado da expressao b e %i", expressao);
    printf("\nO resultado da expressao c e %i", !expressao);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}