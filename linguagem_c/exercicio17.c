/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo17.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    int idade; //declara as variável
    printf("Digite  a idade: ");
    scanf("%i", &idade);
    if (idade<=10)
        printf("A pessoa e crianca");
    else if (idade<18)
            printf("A pessoa e adolescente");
    else printf("A pessoa e adulta");
 
    return 0;
}