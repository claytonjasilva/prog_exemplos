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

int main() {
    double numeros[10];
    double soma = 0.0;
    double media;
    
    // Leitura dos 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%lf", &numeros[i]);
        soma += numeros[i]; // Acumula a soma dos números
    }
    
    // Calcula a média dos números
    media = soma / 10.0;
    
    // Escreve cada número seguido da média
    printf("\nNumeros lidos e a media:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: %.2lf, Media: %.2lf\n", i + 1, numeros[i], media);
    }

    return 0;
}
