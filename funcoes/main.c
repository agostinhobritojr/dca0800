#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sinal(int x){
  if(x >= 0){
    return 1;
  }
  else{
    return -1;
  }
}

int maisum(int x){
  int ret;
  ret = x+1;
  // as funcoes so conseguem ver suas
  // proprias variaveis LOCAIS
//  printf("a = %d", a);
  return  ret;
}

int fatorial2(int x){
  int produto=1;
  int i;
  if(x == 0){
    return 1;
  }
  if(x < 0){
 //   #include <stdlib.h>
    exit(0);
  }
  for (i=1; i<=x; i++) {
    produto = produto*i;
  }
  return produto;
}


unsigned int fatorial(unsigned int x){
  unsigned int retorno;
  if(x == 0){
    return 1;
  }
  retorno = x * fatorial(x-1);
  return retorno;
}

int main(){
  float x, y;
  unsigned int a, b;
  a=-2;
  b=maisum(a);
  x = -2;
 // y = sqrt(-2);
 // printf("raiz de -2 = %f\n", y);
//  printf("sinal de %d = %d\n", a, sinal(a));
  printf("fatorial(%u) = %u\n", 24,
         fatorial(24));
  printf("b = %d\n", b);
  return 0;
}


