#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // declara um array de 40 inteiros
  int idades[40], idades2[40];
  int i, n=40;

  srand(time(0));

  for (i=0; i<n; i++) {
    idades[i] = 5+rand()%100; // stdlib.h
  }
  // copiar idades para idades2
  for (i=0; i<n; i++) {
    idades2[n-1-i] = idades[i];
//    printf("%d, ", idades2[i]);
  }

  for (i=0; i<n; i++) {
    printf("%d, ", idades2[i]);
  }
  return 0;
}
