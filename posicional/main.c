#include <stdio.h>

int main()
{
  int x;
  int resto;
  int mult=1;
  printf("digite x: ");
  scanf("%d", &x);
  printf("%d = ", x);
  do{
    resto = x%10;
    printf("%d+",
           resto*mult);
    x = x / 10;
    mult = mult * 10;
  } while( x > 0);

  return 0;
}
