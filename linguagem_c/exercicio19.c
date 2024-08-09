/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo19.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    char nome1[15], nome2[15], nome3[15];
    int idade1, idade2, idade3;
 
    printf("\nAnimal 1\n");
    printf("Digite o nome: ");
    scanf("%s", nome1);
    printf("Digite a idade: ");
    scanf("%i", &idade1);
    printf("\nAnimal 2\n");
    printf("Digite o nome: ");
    scanf("%s", nome2);
    printf("Digite a idade: ");
    scanf("%i", &idade2);
    printf("\nAnimal 3\n");
    printf("Digite o nome: ");
    scanf("%s", nome3);
    printf("Digite a idade: ");
    scanf("%i", &idade3);

    printf("\n");
    if ((idade1>idade2) && (idade1>idade3))
        printf("O animal mais velho e %s",nome1);
    else if (idade2>idade3)
        printf("O animal mais velho e %s",nome2);
    else
        printf("O animal mais velho e %s",nome3);

    return 0;
}