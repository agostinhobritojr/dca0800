#include <stdio.h>

int main(){
  int fib1, fib2, fib3;
  int i;
  int soma=2;
  fib1 = 1;
  fib2 = 2;
  fib3 = 3;
  while( fib3 < 4000000){
    if(fib3%2 == 0){
      soma = soma + fib3;
    }
    fib1 = fib2;
    fib2 = fib3;
    fib3 = fib1 + fib2;
  }
  printf("soma = %d\n", soma);
  return 0;
}
