#include <stdio.h>

int main(){
  int x;
  x = 5;
  // primeiro testa e depois
  // faz as operacoes

  while (x > 0) {
    printf("x = %d\n", x);
    x--;
  }
  printf("\n");
  x = 5;
  // primeiro faz as operacoes
  // depois testa se continua
  do{
    printf("x = %d\n", x);
    x--;
  } while (x > 0);
  return 0;
}
