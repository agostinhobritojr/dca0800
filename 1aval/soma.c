#include <stdio.h>

int main(void){
  int n, num, soma, i;
  soma = 0;
  printf("digite a quantidade: ");
  scanf("%d",&n);
  for(i=0; i<n; i++){
	printf("digite numero %d: ", i+1);
	scanf("%d",&num);
	if(num%2 == 1){
	  soma = soma + num;
	}
  }
  printf("soma dos impares = %d\n", soma);
}
