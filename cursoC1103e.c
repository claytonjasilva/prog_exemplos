/*
 ============================================================================
 Nome        : Exemplos1_10.c
 Autor      : Prof Clayton J A Silva
 Versao     :
 Copyright   : Curso de C Ibmec
 Descricao : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h> // Biblioteca de funcoes de entrada/saida, como printf e scanf

main() {
	float consumo, capacidade; // Declara variáveis de ponto flutuante
	float autonomia;
	printf("Digite o consumo (em Km/litro): \n"); // Interface com usuario
	scanf("%f",&consumo); // Leitura dos dados
	printf("Digite a capacidade do tanque (litros): \n"); // Interface com usuario
	scanf("%f",&capacidade);	
	autonomia = consumo * capacidade; //Atribui o resultado da expressao para media
	printf("A autonomia do veiculo eh %4.1f km",capacidade); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
}
