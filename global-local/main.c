#include <stdio.h>

int d; // variavel global

int funcao(int c){
  int b;
  b = 1;

  printf("d = %d\n", d);
  return c;
}

int main()
{
  int a;
  d = 3;

  funcao(2);
  printf("Hello World!\n");
  return 0;
}


