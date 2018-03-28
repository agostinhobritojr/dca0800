#include <stdio.h>

int main(){
  int fib1, fib2, fib3;
  int i;
  int soma;
  fib1 = 1;
  fib2 = 2;
  printf("1 2 ");
  soma = 2;
  fib3 = 0;
  for(i=0; fib3 < 4000000; i++){
    fib3 = fib1 + fib2;
    if(fib3%2 == 0 && fib3 <4000000){
      soma=soma+fib3;
    }
    printf("%d, ", fib3);
    fib1 = fib2;
    fib2 = fib3;
  }
  printf("\nsoma = %d\n", soma);
  return 0;
}
