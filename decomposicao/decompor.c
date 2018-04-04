#include <stdio.h>

int main(void){
  int numero, resto;
  int expoente;
  printf("digite o numero: ");
  scanf("%d", &numero);
  for(expoente=0 ; numero != 0 ; expoente++){
	resto = numero%10;
	printf("%dx10^%d + ", resto, expoente);
	numero = numero/10;
  }
  printf("\n");
}
