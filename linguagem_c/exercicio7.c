/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo7.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Expressões aritméticas, declaração de variáveis e atribuição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */
#include <math.h>
#define PI 3.14159265358979323846 //define uma macro para PI

int  main(){ //função principal - retorna inteiro
    float raio,area; //declara as variáveis - observe que a variável é inteira
    raio = 2.1; //atribui o valor de raio
    area = PI*pow(raio,2);
    printf("\nA area do circulo e %f metros quadrados",area); //o argumento da função agora é a variável definida area
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}