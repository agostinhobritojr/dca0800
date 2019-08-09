#include <stdio.h>

// a funcao abaixo eh a funcao principal
int main(void){
  int x, w;
  int y;
//  w = x*y;
  x = 5;
  y = 7*5;
  printf("Agostinho Brito! \n");
  printf("x = %d\n", x);
  printf("y = %d\n", y);

  printf("Digite o valor de x: ");
  // NUNCA ESQUECA DE COLOCAR O '&' ANTES
  // DA VARIAVEL NO SCANF
  scanf("%d", &x);
  printf("x = %d\n", x);

  return 0;
}



