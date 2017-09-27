#include "funcoes.h"

int numero(void){
  return 4;
}

long fat(long x){
  long i;
  long produto;
  produto = 1;

  // realiza um produto consecutivo
  // de um numero por todos os menores
  // que ele para obter o fatorial
  for(i=x; i>1; i--){
    produto = produto*i;
  }

  return (produto);
}


void imprime(int x){
  printf("numero = %d\n", x);
}


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
