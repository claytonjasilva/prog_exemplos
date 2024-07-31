/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo3.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Expressões aritméticas
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro

    printf("Solucao a"); //apresenta o rótulo do resultado da primeira expressão
    printf("\nA solucao da primeira expressao e %.1f",3.+4*5-(2*(4+6))); //como a expressão é de inteiros e desejo floating na saida
                                                                         //apresento o resultado como ponto flutuante com uma casa decimal
    printf("\nSolucao b"); 
    printf("\nA solucao da segunda expressao e %f",(float)(6.+4*8*(3+7+27))); //apresento o resultado como ponto flutuante com casting de tipo
    printf("\nSolucao c"); 
    printf("\nA solucao da terceira expressao e %f",1.0*(3+4*5)/(2*(4+6))); //apresento o resultado como ponto flutuante multiplicação por 1.0
    printf("\nSolucao d"); 
    printf("\nA solucao da quarta expressao e %f",3/(6*1.25+6.78)); //o resultado já é floating

    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}