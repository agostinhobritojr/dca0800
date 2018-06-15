#include <stdio.h>

enum {ALO, MARIA, JOSE, JOAO};

union valores{
  int a;
  int b;
  int c;
  float d;
};

union bytes{
  int a;
  unsigned char v[4];
};

int main(){
  union valores alo;
  union bytes numero;

  numero.a = 257;

  printf("%d= %d|%d|%d|%d\n\n", numero.a,
         numero.v[0],
      numero.v[1],
      numero.v[2],
      numero.v[3]);











  printf("%d, %d, %d, %d\n", ALO, MARIA,
         JOSE, JOAO);

  alo.a = 3;
  printf("alo.a = %d; alo.b = %d,"
         "alo.c= %d\n", alo.a, alo.b, alo.c);

  alo.b = 2;
  printf("alo.a = %d; alo.b = %d,"
         "alo.c= %d\n", alo.a, alo.b, alo.c);

  printf("alo.d = %f\n", alo.d);
  printf("\n\n");

  alo.d = 4;
  printf("alo.a = %d; alo.b = %d,"
         "alo.c= %d\n", alo.a, alo.b, alo.c);

  printf("alo.d = %f\n", alo.d);

  return 0;
}






