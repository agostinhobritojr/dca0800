#include <stdio.h>

void troca(int a, int b){
  int tmp;
  printf("troca: a=%d; b=%d\n", a, b);
  tmp = a; a=b; b=tmp;
  printf("troca: a=%d; b=%d\n", a, b);
}
int main()
{
  int a, b;
  a = 3; b = 4;
  printf("main: a=%d; b=%d\n", a, b);
  troca(a,b);
  printf("main: a=%d; b=%d\n", a, b);

  return 0;
}
