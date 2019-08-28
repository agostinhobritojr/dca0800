#include <stdio.h>

int main(){
  int x;
  printf("Digite o numero para calcular o quadrado\n"
         "ou zero para sair do programa\n");

  printf("x: ");
  scanf("%d", &x);
  while (x!=0) {
    printf("x*x = %d\n", x*x);
    printf("x: ");
    scanf("%d", &x);
  }
  /*
  do{
    printf("x: ");
    scanf("%d", &x);
    if(x != 0){
      printf("x*x = %d\n", x*x);
    }
  } while(x != 0);
  */

  return 0;
}

