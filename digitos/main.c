#include <stdio.h>

int main(void){
  int x;
  int resto;
  int potencia;
  int soma;
  scanf("%d", &x);
  potencia = 1;
  soma = 0;
  for(;x!=0;){
    resto = x % 10;
    if(resto != 0){
      soma += potencia;// soma=soma+potencia;
    }
    x = x/10;
    printf("x     = %8d ", x);
    printf("resto = %1d ", resto);
    printf("pot   = %d\n", potencia);
    potencia = potencia * 2;
  }
  printf("soma = %d\n", soma);
  return 0;
}

