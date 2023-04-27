/* Escrever um código em C para chamar uma função calcular e 
escrever o complemento de um número inteiro N.  
A função deve retornar `void`, porém deve alterar o valor do argumento.  */

#include <stdio.h>
#include <math.h>

void complemento(int *num); // Prototipando a função

int main () {
    int numero;
    int *p;
    p = &numero;
    printf("Digite o numero: ");
    scanf("%d",&numero);
    complemento(p); // Calcula o complemento e altera o valor armazenado em numero pelo ponteiro
    printf("\nO complemento de numero eh %d",numero);

    return 0;
}

void complemento(int *num){ // A função retorna vazio, o parâmetro é um ponteiro
    int cont = 0, q;
    q = *num; // q é o quociente da divisão inteira
    while (q > 0){
        q /= 10;
        cont ++;
    }
    q = (int) pow(10,2); 
    *num = q - *num - 1;
}
