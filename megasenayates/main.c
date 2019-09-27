#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char numeros[60];
  int i, sorteio, tmp;
  // gera os numeros
  for (i=0; i<60; i++) {
    numeros[i] = i+1;
  }
  for (i=0; i<60; i++) {
    printf("%d, ", numeros[i]);
  }

  srand(time(0));
  //
  for (i=59; i>=1; i--) {
    sorteio = rand()%i;
    // trocar o numero do sorteio com o ultimo
    // da sequencia a ser gerada
    tmp = numeros[i];
    numeros[i] = numeros[sorteio];
    numeros[sorteio] = tmp;
  }

  printf("\n\n\n sequencia embaralhada\n ");
  for (i=0; i<6; i++) {
    printf("%d, ", numeros[i]);
  }
  return 0;
}
