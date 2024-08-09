/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo21.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Condicional simples
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>
#include <math.h> // Uso da biblioteca math.h
#include <complex.h> // Uso da biblioteca complex.h


int main() {
	float a, b, c; // Declara variáveis de ponto flutuante
	float delta, x1, x2;
	printf("Digite os coeficientes\n");
	scanf("%f %f %f",&a,&b,&c);
	delta = b * b - 4 * a * c;
	printf("delta e %f\n",delta);
	// Uso da condicional if
	// Atencao aos blocos de instrucoes delimitados por { }
	if (delta>0) { // Raízes diferentes e reais
		printf("Raizes diferentes e reais!\n"); // A endentacao nao tem significado sintatico
		x1 = (- b + sqrt(delta))/(2 * a); 
		x2 = (- b - sqrt(delta))/(2 * a);
		printf("A raiz x1 e %4.2f\n",x1); // Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
		printf("A raiz x2 e %4.2f\n",x2); // Especifica o tamanho do campo e a precisão
	}
	else if (delta==0) { // Raizes reais e iguais
		printf("Raizes reais e iguais!\n");
		printf("As raizes x1 e x2 sao %4.2f\n",-b/(2*a)); 
	}
	else {
		// Raizes complexas 
		printf("Raizes complexas!\n"); // Uso das funcoes da biblioteca complex.h
		// Observe q nao foi preciso inverter o sinal do delta, pois a biblioteca permite operar complexos
		printf("A raiz x1 e %.2f+%.2fj\n",creal(-b/(2*a)+csqrt(delta)/(2*a)),cimag(-b/(2*a)+csqrt(delta)/(2*a))); // O C nao opera diretamente com complexos
		printf("A raiz x2 e %.2f%.2fj\n",creal(-b/(2*a)-csqrt(delta)/(2*a)),cimag(-b/(2*a)-csqrt(delta)/(2*a))); 
		}

    return 0;

}