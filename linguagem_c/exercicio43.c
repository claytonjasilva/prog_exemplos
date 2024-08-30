/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo43.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num_alunos;
    char **nomes;

    // Leitura do número de alunos
    printf("Digite o numero de alunos na turma: ");
    scanf("%d", &num_alunos);

    // Alocação dinâmica de memória para o vetor de ponteiros de strings
    nomes = (char**) malloc(num_alunos * sizeof(char*));

    // Verificação de sucesso na alocação de memória
    if (nomes == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;  // Encerra o programa com erro
    }

    // Limpar o buffer de entrada
    getchar();

    // Leitura dos nomes dos alunos
    for (int i = 0; i < num_alunos; i++) {
        char temp[100];
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';  // Remove a nova linha ao final do nome

        // Aloca memória para o nome e copia o nome lido para o vetor
        nomes[i] = (char*) malloc((strlen(temp) + 1) * sizeof(char));
        if (nomes[i] == NULL) {
            printf("Erro na alocacao de memoria para o nome!\n");
            return 1;  // Encerra o programa com erro
        }
        strcpy(nomes[i], temp);
    }

    // Exibe o primeiro nome digitado
    if (num_alunos > 0) {
        printf("O primeiro nome digitado foi: %s\n", nomes[0]);
    }

    // Liberação da memória alocada
    for (int i = 0; i < num_alunos; i++) {
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}
