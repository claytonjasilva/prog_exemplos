/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo13.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Comando de leitura
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    float perimetro, distancia; //declara as variáveis floating
    int voltas;
    printf("Digite os valores de perimetro e consumo\n");
    printf("Perimetro da pista (m): ");
    scanf("%f",&perimetro);
    printf("Distancia percorrida (m): ");
    scanf("%f",&distancia);
    voltas = (int)(distancia/perimetro); //calcula o numero de voltas completas
    printf("Foram dadas %i voltas completas\n",voltas);
    printf("Falta percorrer %f m",distancia-voltas*perimetro);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}