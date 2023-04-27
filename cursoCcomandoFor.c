/* Escrever um código em C para calcular a expressão e^x,
usando a aproximação por uma série da forma 1 + x + x^2/2! + x^3/3!...  */

#include <stdio.h>
#include <math.h>

void exponencial(void); // Prototipando as funções
int fat(int num);

int main () {
    exponencial(); // Le o valor de x e determina a exponencial e^x
    return 0;
}

void exponencial(void){ // A função retorna vazio, o parâmetro é vazio
    float x, S=0;
    int N;
    printf("Digite o expoente: ");
    scanf("%f",&x);
    printf("\nDigite o numero de termos de aproximacao: ");
    scanf("%d",&N);
    for (int i=0;i<N;i++)
        S += pow(x,i) / fat(i); // Chama a função fat
    printf("A exponencial eh %f",S);
}

int fat(int num){
    if (num == 0)
        return 1;
    else 
        return num * fat(num-1); // C admite recursividade em função
}
