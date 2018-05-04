#include <stdio.h>

int maria; // variavel global, visivel por todas
           // as funcoes

int alo(int x){
  int maria;
  int ret;
  ret = x+1;
  x = 3;
  maria = 8;
  printf("x = %d\n", x);
//  printf("y = %d\n", y);
  printf("valor de maria = %d\n", maria);
  return ret;
}

int main(){
  int x;
  // a variavel y existe apenas
  // no ESCOPO da funcao main
  int y;
  maria = 56;
  y = 3;
  x = 5;
  printf("x = %d\n", x);
  y = alo(x);
  printf("valor de maria = %d\n", maria);


  printf("x = %d\n", x);

  printf("y = %d\n", y);
  return 0;
}
