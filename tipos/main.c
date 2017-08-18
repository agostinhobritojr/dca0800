#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
  int x;
  unsigned int y;
  char z;
  unsigned char w;
  short k;
  long l;
  long long m;

  float fx;
  double dx;
  long double ldx;

  fx = FLT_MAX;
  dx = DBL_MAX;
  ldx = LDBL_MAX;

  printf("fx = %f\n", fx);
  printf("\n\n");
  printf("\n\n");
  printf("dx = %f\n", dx);
  printf("\n\n");
  printf("\n\n");
  printf("ldx = %Lf\n", ldx);
  printf("\n\n");

  w = 257;
  printf("w = %d\n", w);
  y = 3;

  x = INT_MAX;

  printf("unsigned int max = %u\n", UINT_MAX);
  printf("long max = %ld\n", LONG_MAX);
  printf("long long max = %lli\n", LLONG_MAX);



  printf("x = %d\n", x);
  printf("y = %u\n", y);
  printf("sizeof: int = %d\n", sizeof(int));
  printf("sizeof: int = %d\n", sizeof(x));
  printf("sizeof: char = %d\n", sizeof(z));
  printf("sizeof: unsigned char = %d\n", sizeof(w));
  printf("sizeof: short = %d\n", sizeof(k));
  printf("sizeof: long = %d\n", sizeof(l));
  printf("sizeof: long long = %d\n", sizeof(m));

  return 0;
}






