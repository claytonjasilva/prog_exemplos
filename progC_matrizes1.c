#include <stdio.h>
#define N 20
#define M 10

int main(){
  int mtrx[N][M]; //Declarar matriz NxM
  int i,j,cont=1; //Inicializar e declarar variaveis

  for (i=0;i<N;i++)
    for (j=0;j<M;j++){
      mtrx[i][j] = cont;
      cont++;
    }
      
  for (i=0;i<N;i++)
    for (j=0;j<M;j++)
      printf("%i ",mtrx[i][j]);
  
  return 0;
}
