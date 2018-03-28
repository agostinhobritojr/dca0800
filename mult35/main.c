#include <stdio.h>

int main(){
  int numero;
  int soma;
  /*
  printf("digite o numero: ");
  scanf("%d", &numero);
  */
  soma=0;
  for(numero=1; numero<1000; numero++){
    if( (numero%3 == 0) || (numero%5 == 0)){
      //printf("%d eh multiplo de 3 ou 5\n", numero);
      soma = soma + numero;
    }
  }
  printf("a soma = %d\n", soma);
  return 0;
}
