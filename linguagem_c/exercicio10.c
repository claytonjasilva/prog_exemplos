/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo10.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : comando de entrada
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */
#include <math.h>

int  main(){ //função principal - retorna inteiro
    int num1,num2; //declara as variáveis - observe que são inteiras
    printf("Digite o numero 1\n");
    printf("numero 1: ");
    scanf("%i",&num1);
    printf("\nDigite o numero 2\n");
    printf("numero 2: ");
    scanf("%i",&num2);
    printf("\nO produto de %i por %i resulta %i",num1,num2,num1*num2);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}