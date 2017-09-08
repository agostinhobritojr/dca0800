#include <stdio.h>

// declaracao forward (adiantada)
// prototipo da funcao fat
long fat(long x);

long main(void){
  long a, b;

  a = 10;

  b = fat(a);

  printf("a = %ld; b = %ld\n", a,b);
  return 0;
}

long fat(long x){
  long i;
  long produto;
  produto = 1;

  for(i=x; i>1; i--){
    produto = produto*i;
  }

  return (produto);
}
