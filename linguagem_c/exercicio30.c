/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo31.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Manipulação de char e strings
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

float opcao1(N){
    float S = 0, termo;
    for (int i=0;i<N;i++){
        termo = 1.0/(i + 3.0);
        S += termo;
    }
    return S;
}

float opcao2(N){
    float S = 0, termo;
    for (int i=0;i<N;i++){
        termo = (2.0 * i)/(i + 1.0);
        S += termo;
    }
    return S;
}

int opcao3(N){
    int S = 0;
    for (int i=0;i<N;i++)
        S += i;
    return S;
}

int main () {
    int numero, flag = 1;
    float resultado;
    char opcao;
    printf("Digite o numero inteiro positivo: ");
    scanf("%i",&numero);
    while (flag) {
        printf("Digite uma opcao - 1, 2 ,3: \n");
        scanf(" %c",&opcao); // Limpando o caractere nova linha (\n) do buffer de teclado com um espaço em branco antes do %c
        if (opcao != '1' && opcao != '2' && opcao != '3') {
            printf("Caractere invalido\n");
            continue;
        } // descarta caractere invalido
            
        switch (opcao) {
            case '1':
                resultado = opcao1(numero);
                flag = 0;
                break;
            case '2':
                resultado = opcao2(numero);
                flag = 0;
                break;
            case '3':
                resultado = opcao3(numero);
                flag = 0;
                break;    
        }
    }
    printf("O resultado da operacao eh %.1f",resultado);
    return 0;
}