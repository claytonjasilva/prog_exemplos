/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo9.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : comando de entrada
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h> /*diretiva de pré-processamento, inclui arquivo cabeçalho da biblioteca padrão */
#include <math.h>

int  main(){ //função principal - retorna inteiro
    int num; //declara as variáveis - observe que são inteiras
    printf("Digite o numero\n");
    printf("numero: ");
    scanf("%i",&num);
    printf("\nO quadrado do numero e %i",(int)pow(num,2)); //a 'chamada' da função pode ser feita no argumento de printf
                                                           //observe que deve ser feito o cast de tipo porque pow retorna o tipo double
                                                           //ou especificar retorno %f
 
    return 0; //valor de retorno da função principal
} //bloco de instruções delimitado por {}