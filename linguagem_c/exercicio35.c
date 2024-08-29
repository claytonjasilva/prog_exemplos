/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo35.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas de repetição
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definindo a constante PI
#define PI 3.14159265358979323846

// Funcao para calcular a area de um triangulo
float calcular_area_triangulo(float base, float altura) {
    return (base * altura) / 2.0;
}

// Funcao para calcular a area de um retangulo
float calcular_area_retangulo(float largura, float altura) {
    return largura * altura;
}

// Funcao para calcular a area de um circulo
float calcular_area_circulo(float raio) {
    return PI * raio * raio;
}

int main() {
    int n, i;
    char tipo;
    float base, altura, largura, raio;

    // Leitura do numero de figuras
    printf("Digite o numero de figuras: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Leitura do tipo de figura
        printf("\nFigura %d:\n", i + 1);
        printf("Digite o tipo da figura ('t': triangulo, 'r': retangulo, 'c': circulo): ");
        scanf(" %c", &tipo);

        // Calcula e imprime a area com base no tipo da figura
        switch (tipo) {
            case 't':
                // Leitura dos parametros e calculo da area do triangulo
                printf("Digite a base do triangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triangulo: ");
                scanf("%f", &altura);
                printf("Area do triangulo: %.2f\n", calcular_area_triangulo(base, altura));
                break;
            case 'r':
                // Leitura dos parametros e calculo da area do retangulo
                printf("Digite a largura do retangulo: ");
                scanf("%f", &largura);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                printf("Area do retangulo: %.2f\n", calcular_area_retangulo(largura, altura));
                break;
            case 'c':
                // Leitura dos parametros e calculo da area do circulo
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                printf("Area do circulo: %.2f\n", calcular_area_circulo(raio));
                break;
            default:
                // Caso o tipo de figura seja invalido
                printf("Tipo de figura invalido!\n");
                break;
        }
    }

    return 0;
}
