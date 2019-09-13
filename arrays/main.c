#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // declara um array de 40 inteiros
  int idades[40], idades2[40];
  int i, j, n=40, tmp;

  srand(time(0));

  for (i=0; i<n; i++) {
    idades[i] = 5+rand()%100; // stdlib.h
  }
// copiar idades para idades2
//  for (i=0; i<n; i++) {
//    idades2[n-1-i] = idades[i];
//    printf("%d, ", idades2[i]);
//  }

  // o indice "i" regula o elemento que
  // sera comparado com os demais
  //
  // o indice "j" regula os elementos
  // subsequentes que servirao para
  // comparacao

  for (i=0; i<n-1; i++) {
    for (j=i+1; j<n; j++) {
      if(idades[i] > idades[j]){
        tmp = idades[i];
        idades[i] = idades[j];
        idades[j] = tmp;
      }
    }
  }



  for (i=0; i<n; i++) {
    printf("%d, ", idades[i]);
  }
  return 0;
}
