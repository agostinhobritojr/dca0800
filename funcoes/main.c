#include <stdio.h>

// declaracao forward (adiantada)
// prototipo da funcao fat
long fat(long x);

int numero(void){
  return 3;
}

void imprime(int x){
  printf("numero = %d\n", x);
}

// RECURSIVIDADE
// CRIAR a funcao fatrec(x) usando
// recursividade e com um criteiro
// de parada
long fatrec(long x){
  long ret;
  if(x < 0){
    return 0;
   // exit(0);
  }
  else if(x == 0 || x == 1){
    return 1;
  }
  ret = x * fatrec(x-1);
  return (ret);
}



long main(void){
  long a, b;
  int x;

  x = numero();

  a = 5;

  b = fatrec(a);

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
