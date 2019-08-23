#include <stdio.h>

int main(){
  int x, y, resto;
  printf("Digite x: "); scanf("%d", &x);
  printf("Digite y: "); scanf("%d", &y);

  // executa enquanto o resto nao eh zero
  for (; resto!=0;) {
    // se o resto for zero, achou o mdc
    resto = x%y;
    if(resto == 0){
      printf("mdc = %d\n", y);
    }
    else {
      // nao eh zero, entao devera
      // dividir o denominador pelo resto
      // novamente
      x = y;
      y = resto;
    }
  }
  return 0;
}
