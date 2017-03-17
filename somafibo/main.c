#include <stdio.h>

int main(void){
  int fib0, fib1;
  int tmp;
  int soma;
  soma = 0;
  for(fib0=1, fib1=2; fib1<=4000000;){
    printf("%d, ", fib1);
    if(fib1 % 2 == 0){
      soma = soma + fib1;
    }
    tmp = fib0 + fib1;
    fib0 = fib1;
    fib1 = tmp;
  }
  printf("\nsoma = %d", soma);
  return 0;
}

