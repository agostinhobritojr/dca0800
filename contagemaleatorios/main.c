#include <stdio.h>
#include <stdlib.h>

int main(){
  int numeros[10];
  int i, aleatorio;

  for (i=0; i<10; i++) {
    numeros[i]=0;
  }

  // muda a SEMENTE do gerador de
  // numeros aleatorios
  srand(time(0));

  for (i=0; i<10000; i++) {
    aleatorio = 1+rand()%10;
    numeros[aleatorio-1]++;
  }

  for (i=0; i<10; i++) {
    printf("%d = %d\n", i+1, numeros[i]);
  }
  return 0;
}
