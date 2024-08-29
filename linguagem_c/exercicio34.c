/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo34.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

#define NUM_ALUNOS 30

// Função para calcular a média final
float calcular_media(float ap1, float ap2, float ac) {
    return 0.4 * ap1 + 0.4 * ap2 + 0.2 * ac;
}

// Função para calcular a nova média após substituição da menor AP pela nota da AS
float substituir_nota(float ap1, float ap2, float ac, float as) {
    float menor_ap = (ap1 < ap2) ? ap1 : ap2;
    
    if (as > menor_ap) {
        if (ap1 == menor_ap) {
            ap1 = as;
        } else {
            ap2 = as;
        }
    }

    return calcular_media(ap1, ap2, ac);
}

// Função para calcular a porcentagem de faltas
float calcular_faltas(int faltas, int aulas_dadas) {
    return (faltas / (float)aulas_dadas) * 100.0;
}

int main() {
    int aulas_dadas, faltas[NUM_ALUNOS];
    float ap1[NUM_ALUNOS], ap2[NUM_ALUNOS], ac[NUM_ALUNOS], as[NUM_ALUNOS];
    float media[NUM_ALUNOS], nova_media[NUM_ALUNOS], porcentagem_faltas[NUM_ALUNOS];

    // Leitura do número de aulas dadas
    printf("Digite o número de aulas dadas: ");
    scanf("%d", &aulas_dadas);

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Digite a nota da AP1: ");
        scanf("%f", &ap1[i]);
        printf("Digite a nota da AP2: ");
        scanf("%f", &ap2[i]);
        printf("Digite a nota da AC: ");
        scanf("%f", &ac[i]);
        printf("Digite o numero de faltas: ");
        scanf("%d", &faltas[i]);

        // Calcula a média inicial
        media[i] = calcular_media(ap1[i], ap2[i], ac[i]);

        // Calcula a porcentagem de faltas
        porcentagem_faltas[i] = calcular_faltas(faltas[i], aulas_dadas);

        // Verifica se a média é menor que 7.0 e se precisa da AS
        if (media[i] < 7.0) {
            printf("Aluno %d precisa fazer a AS.\n", i + 1);
            printf("Digite a nota da AS: ");
            scanf("%f", &as[i]);

            // Substitui a menor nota da AP pela nota da AS, se aplicável, e calcula a nova média
            nova_media[i] = substituir_nota(ap1[i], ap2[i], ac[i], as[i]);
        } else {
            nova_media[i] = media[i];
        }

        // Determina a condição de aprovação ou reprovação
        if (nova_media[i] >= 7.0 && porcentagem_faltas[i] <= 25.0) {
            printf("Aluno %d estah APROVADO. Média: %.2f, Faltas: %.2f%%\n", i + 1, nova_media[i], porcentagem_faltas[i]);
        } else {
            printf("Aluno %d estah REPROVADO. Média: %.2f, Faltas: %.2f%%\n", i + 1, nova_media[i], porcentagem_faltas[i]);
        }
    }

    return 0;
}
