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
	int idade; // Declara a variável ponteiro
	char *classe;
	printf("Digite a idade da pessoa: ");
	scanf("%i",&idade);
	if (idade<=10) // classe crianca
	  classe="crianca"; // so e possivel fazer isso porque classe foi declarada como ponteiro
						   // strings declaradas como vetor não admitem comando de atribuicao
	else if (idade<18)
			  classe = "adolescente";
		   else  
		 	  classe = "adulto";
	printf("A pessoa e %s", classe);
		
}
