#include <stdio.h>

int main()
{
  int i, soma=0;
  for(i=1; i<1000; i++){
    if(i%3==0 || i%5==0){
      soma = soma + i;
    }
  }
  printf("soma = %d\n", soma);
  return 0;
}
