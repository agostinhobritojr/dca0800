#include <stdio.h>
#include <math.h>

int main(){
  int x, xold, y, mult=1;
  int cont, div, i;
  printf("digite o numero: ");
  scanf("%d", &x);
  xold = x;
  printf("%d=", x);
  for (cont=0;x>0;cont++) {
    y = x%10;
    printf("%dx%d+", y, mult);
    x = x/10;
    mult = mult*10;
  }
  printf("\n");
  printf("cont = %d\n", cont);

  div = pow(10, cont-1);
  printf("div = %d\n", div);

  for (i=0; i<cont; i++){
    printf("%dx%d",xold/div, div);
    if(i<cont-1){
      printf("+");
    }
    xold = xold%div;
    div = div/10;

  }
printf("\n");

  return 0;
}
