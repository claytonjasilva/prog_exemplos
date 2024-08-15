/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo28.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

int main() {
    int numero, S = 0;
    printf("Digite o numero inteiro nao negativo: ");
    scanf("%i",&numero);
    do {
        S += --numero;
    } while (numero>0);
    printf("\nA soma dos numeros eh %i\n",S);

	return 0;
}