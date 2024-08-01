/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo11.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Comando de leitura
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */

int  main(){ //função principal - retorna inteiro
    float ap1, ap2, ac, nf; //declara as variáveis 
    printf("Digite os valores de ap1, ap2 e ac - nessa ordem\n");
    scanf("%f %f %f",&ap1,&ap2,&ac);
    nf = 0.4*(ap1+ap2)+0.2*ac;
    printf("A nota final do aluno e %f",nf);
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}