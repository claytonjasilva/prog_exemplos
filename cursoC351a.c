/*
 ============================================================================
 Nome        : Exemplos3_5.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

main() {
	int resultado, x=7; // Declara e inicializa a variáveis
	resultado = (2 > x) && (3 + 4 == 6); // Operador lógico de conjunção
					     // 0 && 0 = 0
					     // 0 && 1 = 0
					     // 1 && 0 = 0
					     // 1 && 1 = 1
	printf("O resultado da expressao logica e %i",resultado); 
}
