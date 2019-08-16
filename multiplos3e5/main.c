#include <stdio.h>

int main(){
  int soma=0, i;

  for (i=0; i<1000; i++) {
    if( (i%3==0) || (i%5==0) ){
      soma = soma + i;
    }
  }
  printf("soma = %d\n", soma);
  return 0;
}
