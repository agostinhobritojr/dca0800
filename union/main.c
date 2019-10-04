#include <stdio.h>

union Alo{
  int a;
  int b;
  unsigned char c[4];
};

int main(){
  union Alo alo;
  alo.a = 256;
  printf("a = %d\n", alo.a);
  printf("c[0] = %d\n", alo.c[0]);
  printf("c[1] = %d\n", alo.c[1]);
  printf("c[2] = %d\n", alo.c[2]);
  printf("c[3] = %d\n", alo.c[3]);
  alo.c[0] = 1;
  printf("a = %d\n", alo.a);
  return 0;
}





