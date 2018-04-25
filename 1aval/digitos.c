#include <stdio.h>

int main(void){
  int x, x1, x2;
  int resto;
  int digito;
  int soma;
  int contador;
  int divisor;
  scanf("%d", &x);
  x2 = x1 = x;
  soma = 0;
  contador = 0;
  
  for(;x!=0;){
    resto = x % 10;
    x = x/10;
    contador++;
  }
  divisor = 1;
  for(int i=0; i<contador-1; i++){
    divisor = divisor*10;
  }
  printf("div = %d\n", divisor);
  for(int i=0; i<contador; i++){
    digito = x1/divisor;
    resto = x1%divisor;
    x1 = x1 - divisor*digito;
    printf("%dx10^%d", digito, contador-i-1);
    if(i!=contador-1){
      printf(" + ");
    }
    divisor = divisor/10;
  }
  printf(" = ");
  divisor = 1;
  for(int i=0; i<contador-1; i++){
    divisor = divisor*10;
  }
  printf("div = %d\n", divisor);
  for(int i=0; i<contador; i++){
    digito = x2/divisor;
    resto = x2%divisor;
    x2 = x2 - divisor*digito;
    printf("%d", digito*divisor);
    if(i!=contador-1){
      printf(" + ");
    }
    divisor = divisor/10;
  }

 return 0;
}

