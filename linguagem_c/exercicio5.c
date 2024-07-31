/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo5.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Expressões aritméticas, declaração de variáveis e atribuição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */
#include <math.h>

int  main(){ //função principal - retorna inteiro
    float ap1, ap2, ac; //declara as variáveis 
    ap1 = 8.5; //atribuição dos valores às variáveis
    ap2 = 7.3;
    ac = 5;
    printf("A nota final do aluno e %f",0.4*(ap1+ap2)+0.2*ac);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}