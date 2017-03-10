#include <stdio.h>
#include <values.h>

int main(void){
  int x;
  unsigned char y;

  y = 0;

  printf("y = %d\n", y);

  y = y - 1;

  printf("y = %d\n", y);
//  x = -648;//916398674;
//  printf("x = %d\n", x);

  printf("o tamanho de um int      eh: %d\n", sizeof(int));
  printf("o tamanho de um float    eh: %d\n", sizeof(float));
  printf("o tamanho de um long int eh: %d\n", sizeof(long int));

  printf("o maior long eh %ld\n", MAXINT);

  return 0;
}

