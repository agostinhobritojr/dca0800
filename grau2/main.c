#include <stdio.h>
#include <math.h>

int main(void){
  float a,b,c;
  float delta;
  float x1, x2;

  printf("digite o valor de a: ");
  scanf("%f", &a);
  printf("digite o valor de b: ");
  scanf("%f", &b);
  printf("digite o valor de c: ");
  scanf("%f", &c);

  delta=b*b-4*a*c;

  if( delta >= 0.0 ){
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);

  }

  return 0;
}

