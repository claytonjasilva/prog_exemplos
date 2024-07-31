/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo2.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Hello World in C, Ansi-style
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro

    printf("Agora vou iniciar..."); //printf é uma função de saída da biblioteca stdio.h
    printf("\nproduzindo um novo codigo"); //'\n' representa o chamado caractere de escape, gerando uma quebra de linha com dois printf   

    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}