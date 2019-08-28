#include <stdio.h>

int main(){
  int fib1=1, fib2=2, fib3=3;
  int soma=1;

  // procura os proximos ate o limite
  // de 4.000.000
  while (fib3 < 4000000) {
    fib1 = fib2;
    fib2 = fib3;
    // se o numero achado for impar
    // acrescenta a soma
    if(fib2 %2 !=0 ){
      soma = soma+fib2;
    }
    // acha o proximo numero da serie
    fib3 = fib1 + fib2;
    printf("%d, ", fib3);
  }
  printf("\n\nsoma = %d\n", soma);
  return 0;
}
