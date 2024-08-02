/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo12.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Comando de leitura
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    float consumo, capacidade; //declara as variáveis 
    printf("Digite os valores de consumo e capacidade\n");
    printf("\nconsumo (km/l): ");
    scanf("%f",&consumo);
    printf("\ncapacidade (l): ");
    scanf("%f",&capacidade);
    printf("O veiculo tem autonomia de %f km",consumo*capacidade);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}