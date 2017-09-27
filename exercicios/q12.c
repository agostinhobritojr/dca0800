#include <stdio.h>

int main(void){
  int x;
  int n, i, fail;
  int n6, n12;
  x = 2;
  n = 1;
  
  while(n < 12){
	x++;
	fail = 0;
	for(i=2; (i<x-1) && (fail == 0); i++){
	  if(x % i == 0){
		fail = 1;
	  }
	}
	// se o numero foi primo, fail sera
	// igual a zero
	if(fail == 0){
	  // incrementa a quantidade de numeros primos
	  // encontrados
	  n++;
	  if(n == 6){
		n6 = x;
		printf("sexto = %d", x);
	  }
	  printf("numero = %d\n", x);
	}
  }
  n12 = x;
  printf("dife = %d\n", n12 - n6);
}
