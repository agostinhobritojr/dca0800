#include <stdio.h>

int main(void){
  int x, resto, divisor;
  int soma=0;
  x = 13;

  // o loop que segue gera em "x" os
  // numeros entre 3 e 1000
  for(x=3; x<=1000; x++){
    // para cada valor gerado de "x"
    // testa se ele eh primo
    divisor = 1;
    do{
      divisor++;
      resto = x%divisor;
    }  while(resto!=0);
    if(x == divisor){
      // soma = soma + x;
      soma += x;
      printf("o numero %d eh primo\n", x);
    }
  }
  return 0;
}

