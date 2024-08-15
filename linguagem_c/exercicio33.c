/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo33.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <conio.h> // Inclui funcoes de leitura/escrita de caracteres
#define TAM 15

#include <stdio.h>
#include <conio.h> // Necessário para getch() ou getche()

#define TAM 15

int main() {
    char frase[TAM]; // Declara variável do tipo char e a frase
    int contador = 0; // Declara variável do tipo inteiro

    while (contador < TAM - 1) {  // Limita o contador para evitar overflow
        frase[contador] = getche(); // Captura cada caractere
        if (frase[contador] == '\r') {  // Checa por Enter (carriage return)
            break;  // Sai do loop se Enter for pressionado
        }
        contador++;
    }

    // Completa a frase com espaços em branco até TAM
    for (int i = contador; i < TAM; i++) {
        frase[i] = ' ';
    }

    frase[TAM - 1] = '\0';  // Assegura que a string termina com '\0'

    printf("\nA frase é: %s\n", frase);

    return 0;
}
