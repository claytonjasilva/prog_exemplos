/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo20.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    char flag;
    float operacao;
    float num1,num2,num3,maior;
 
    printf("Digite a alternativa: ");
    scanf("%c", &flag);

    switch (flag){
        case 'A': case 'B':
            printf("Digite dois numeros:");
            scanf("%f %f",&num1,&num2);
            printf("Opcao %c: Operacao adicao=%.1f",flag,num1+num2);
            break;
        case 'C':
            printf("Digite um numero:");
            scanf("%f",&num1);
            printf("Opcao %c: Operacao quadrado=%.1f",flag,num1*num1);
            break;
        case 'D':
            printf("Digite tres numeros:");
            scanf("%f %f %f",&num1,&num2,&num3);
            if (num1>num2)
                maior = num1;
            else maior = num2;
            if (num3>maior)
                maior = num3;
            printf("Opcao %c: Operacao maior=%.1f",flag,maior);
            break;
        default:
            printf("Entrada invalida");
    }

    return 0;
}