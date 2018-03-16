#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c;
  float delta;
  float x1, x2;

  // mostra mensagem na tela
  printf("Digite o valor de a: ");
  // le um valor do teclado e grava
  // no endereco da variavel a
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  delta = b*b - 4*a*c;
  printf("delta = %f\n", delta);
  if(delta >= 0){
    x1 = (-b +sqrt(delta))/(2*a);
    x2 = (-b -sqrt(delta))/(2*a);

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }
}
