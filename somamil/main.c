#include <stdio.h>

int main(){
  float x=0.125, soma=0;
  int i;

  for (i=0; i<10000; i++) {
    soma = soma + x;
  }
  printf("x = %f\n", soma);

  return 0;
}
