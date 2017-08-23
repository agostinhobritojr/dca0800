#include <stdio.h>

int main(void){
  int x = 5789;
  int potencia;
  potencia = 1;

  do{
    printf("%dx%d +", x%10, potencia);
    x /= 10;
    potencia *= 10;
  }while( x != 0);
  printf("\n");
  return 0;
}

