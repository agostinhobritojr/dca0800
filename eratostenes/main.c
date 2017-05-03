#include <stdio.h>
#include <math.h>

#define LIMIT 1001

int main(void){
  int n;
  int i, j;
  int x[LIMIT];
  n = LIMIT;
  int raiz;
  // soh ha necessidade de testar o crivo
  // ateh a raiz quadrada do numero
  for(i=0; i<n; i++){
    x[i] = i;
  }
  raiz = sqrt(n);
  printf("raiz = %d\n", raiz);
  for(i=2; i<=raiz; i++){
    // o numero ainda nao foi marcado
    if(x[i] == i){
      // mostra o numero primo
      for(j = i+i; j<LIMIT; j=j+i){
        // marca com zero os numero que
        // nao sao primos, pois sao multiplos
        // de "i"
        x[j] = 0;
      }
    }
  }
  for(i=2; i<LIMIT; i++){
    if(x[i] != 0){
      printf("%d, ", i);
    }
  }
  return 0;
}








