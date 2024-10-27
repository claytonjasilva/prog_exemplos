/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo61.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas union
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definição da union Moeda
union Moeda {
    float real;
    float dolar;
    float euro;
};

// Constantes de conversão
const float TAXA_DOLAR = 5.20; // Exemplo de taxa: 1 dólar = 5.20 reais
const float TAXA_EURO = 5.70;  // Exemplo de taxa: 1 euro = 5.70 reais

// Função para converter de reais para dólares
float converterParaDolar(float real) {
    return real / TAXA_DOLAR;
}

// Função para converter de reais para euros
float converterParaEuro(float real) {
    return real / TAXA_EURO;
}

// Função para exibir os valores convertidos
void exibirConversao(union Moeda moeda) {
    printf("Valor em Reais: %.2f\n", moeda.real);
    printf("Convertido para Dólares: %.2f\n", converterParaDolar(moeda.real));
    printf("Convertido para Euros: %.2f\n", converterParaEuro(moeda.real));
}

int main() {
    union Moeda moeda;

    // Solicita ao usuário o valor em reais
    printf("Digite o valor em Reais: ");
    scanf("%f", &moeda.real);

    // Exibe o valor nas outras moedas
    exibirConversao(moeda);

    return 0;
}
