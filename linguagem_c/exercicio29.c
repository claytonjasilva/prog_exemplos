/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo29.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Digite o numero inteiro nao nulo - 0 para sair: ");
        scanf("%i",&numero);
        if (numero == 0)
            break;
        if (numero % 2 == 0) 
            printf("O numero eh %d\n",numero);
        else
            printf("numero impar\n");
    } while (1); // Estrutura do...while de repetição - será discutida na seção seguinte

    return 0;
}