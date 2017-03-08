#include <stdio.h>
#include <math.h>

int main(void){
  // tipo de dado float armazena numeros reais
  // tambem conhecidos como numeros em ponto flutuante
  float a, b, c;
  float delta;
  float x1, x2;
  printf("digite a: ");
  scanf("%f", &a);
  printf("digite b: ");
  scanf("%f", &b);
  printf("digite c: ");
  scanf("%f", &c);
  printf("%6.2fx^2+%6.2fx+%6.2f=0\n", a, b, c);

  delta = b*b - 4*a*c;
  if(delta >= 0.0){
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }
  return 0;
}

