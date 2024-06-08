/*
 ============================================================================
 Nome        : Exemplos1.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : 
 Escrever um programa para atribuir as notas 8,5 (oito vírgula cinco), 7,3 (sete vírgula três) e 5 (cinco) respectivamente para ap1, ap2 e ac de um aluno.
 Calcular e escrever a média.
 ============================================================================
 */

#include <stdio.h> // Inclusão da biblioteca stdio.h necessária para utilizar a função printf

int main() {
    // Declaração das variáveis para as notas e atribuição dos valores
    float ap1 = 8.5; // Nota AP1
    float ap2 = 7.3; // Nota AP2
    float ac = 5.0;  // Nota AC
    
    // Cálculo da média
    float media = (ap1 + ap2 + ac) / 3; // Soma as três notas e divide por 3
    
    // Exibição das notas e da média
    printf("Nota AP1: %.1f\n", ap1); // Imprime a nota AP1 com uma casa decimal
    printf("Nota AP2: %.1f\n", ap2); // Imprime a nota AP2 com uma casa decimal
    printf("Nota AC: %.1f\n", ac);   // Imprime a nota AC com uma casa decimal
    printf("Média: %.2f\n", media);  // Imprime a média com duas casas decimais
    
    return 0; // Retorna 0 indicando que o programa terminou sua execução com sucesso
}
