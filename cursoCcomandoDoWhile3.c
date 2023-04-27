/*Elaborar um código em C para ler um número inteiro *n* positivo. O usuário deve escolher uma opção de 1 a 3.  
A opção 1 deve escrever a soma dos *n* termos da série S = 1/(k+3), k=0,...,n-1  
A opção 2 deve escrever a soma dos *n* termos da série S = 2k/(k+1), k=0,...,n-1  
A opção 3 deve escrever a soma dos *n* termos da série S = k, k=0,...,n-1  
Se o usuário digitar uma opção inválida o programa deve permanecer solicitando uma opção válida.*/

#include <stdio.h>

float opcao1(N){
    float S = 0, termo;
    for (int i=0;i<N;i++){
        termo = 1.0/(i + 3.0);
        printf("\n%f",termo);
        S += termo;
    }
    return S;
}


float opcao2(N){
    float S = 0, termo;
    for (int i=0;i<N;i++){
        termo = (2.0 * i)/(i + 1.0);
        S += termo;
    }
    return S;
}

int opcao3(N){
    int S = 0;
    for (int i=0;i<N;i++)
        S += i;
    return S;
}


int main () {
    int numero, flag = 1;
    float resultado;
    char opcao;
    printf("Digite o numero inteiro positivo: ");
    scanf("%d",&numero);
    do {
        printf("Digite uma opcao - 1, 2 ,3: \n");
        scanf(" %c",&opcao); // Limpando o buffer de teclado com um espaço em branco antes do %c
        if (opcao != '1' && opcao != '2' && opcao != '3')
            continue;
        switch (opcao) {
            case '1':
                resultado = opcao1(numero);
                flag = 0;
                break;
            case '2':
                resultado = opcao2(numero);
                flag = 0;
                break;
            case '3':
                resultado = opcao3(numero);
                flag = 0;
                break;    
        }
    } while (flag);
    printf("O resultado da operacao eh %f",resultado);
    return 0;
}
