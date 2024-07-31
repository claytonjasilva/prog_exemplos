/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo4.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Expressões aritméticas e biblioteca math.h
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */
#include <math.h>

int  main(){ //função principal - retorna inteiro

    printf("Solucao a"); //apresenta o rótulo do resultado da primeira expressão
    printf("\nA solucao da primeira expressao e %e",pow(3,(4*5*(2*(4+6))))); //a função pow tem a seguinte assinatura pow(base,expoente)
                                                                             //%e apresenta o resultado em notação científica
    printf("\nSolucao b"); 
    printf("\nA solucao da segunda expressao e %f",sqrt(2*pow(5+3,34))); //apresento o resultado como ponto flutuante com casting de tipo

    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}