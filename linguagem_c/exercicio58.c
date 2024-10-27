/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo58.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas union
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definição da union Temperatura
union Temperatura {
    float celsius;
    float fahrenheit;
};

// Função para converter Celsius para Fahrenheit
float converterParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Função para converter Fahrenheit para Celsius
float converterParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Função para exibir o valor da temperatura em ambas as escalas
void exibirTemperatura(union Temperatura temp, char escala) {
    if (escala == 'C') {
        printf("Temperatura em Celsius: %.2f °C\n", temp.celsius);
        printf("Temperatura em Fahrenheit: %.2f °F\n", converterParaFahrenheit(temp.celsius));
    } else if (escala == 'F') {
        printf("Temperatura em Fahrenheit: %.2f °F\n", temp.fahrenheit);
        printf("Temperatura em Celsius: %.2f °C\n", converterParaCelsius(temp.fahrenheit));
    } else {
        printf("Escala inválida!\n");
    }
}

int main() {
    union Temperatura temp;
    char escala;

    // Solicita ao usuário a escala e o valor da temperatura
    printf("Digite a escala da temperatura (C para Celsius, F para Fahrenheit): ");
    scanf(" %c", &escala);

    if (escala == 'C') {
        printf("Digite o valor da temperatura em Celsius: ");
        scanf("%f", &temp.celsius);
    } else if (escala == 'F') {
        printf("Digite o valor da temperatura em Fahrenheit: ");
        scanf("%f", &temp.fahrenheit);
    } else {
        printf("Escala inválida!\n");
        return 1;
    }

    // Exibe a temperatura nas duas escalas
    exibirTemperatura(temp, escala);

    return 0;
}
