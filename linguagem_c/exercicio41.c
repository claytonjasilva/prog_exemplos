/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo40.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <string.h>

int main() {
    // Criação do vetor de nomes
    char nomes[7][10] = {"ana", "joao", "pedro", "carlos", "jose", "joaquim", "zenildo"};
    char nome_digitado[10];
    int encontrado = 0;

    // Leitura do nome digitado pelo usuário
    printf("Digite um nome: ");
    scanf("%9s", nome_digitado);  // Limita a entrada a 9 caracteres para evitar overflow

    // Verifica se o nome está no vetor
    for (int i = 0; i < 7; i++) {
        if (strcmp(nomes[i], nome_digitado) == 0) {
            encontrado = 1;
            break;
        }
    }

    // Exibe a mensagem apropriada
    if (encontrado) {
        printf("NOME ENCONTRADO!\n");
    } else {
        printf("NOME NAO PERTENCE A RELACAO!\n");
    }

    return 0;
}
