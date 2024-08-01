/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo8.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : comando de entrada
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    int num1,num2,soma; //declara as variáveis - observe que são inteiras
    printf("Digite dois numeros\n");
    printf("num 1: ");
    scanf("%i",&num1);
    printf("\nnum 2: ");
    scanf("%i",&num2);
    soma = num1 + num2; //atribui a soma à variável soma
    printf("\nA soma dos numeros e %i",soma);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}