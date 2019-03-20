#include <stdio.h>

int main()
{
  int x, resto;
  printf("digite x: ");
  scanf("%d", &x);
  resto = x - 2*(x/2);
  if(resto == 0){
    printf("numero eh par\n");
  }
  else{
    printf("numero eh impar\n");
  }
  printf("resto = %d\n", resto);
  return 0;
}
