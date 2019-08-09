#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, delta, x1, x2;

  printf("Solucionador de eq de grau2\n");
  printf("digite a: ");
  scanf("%f",&a);
  printf("digite b: ");
  scanf("%f",&b);
  printf("digite c: ");
  scanf("%f",&c);

  delta = b*b - 4*a*c;
  if( delta >= 0){
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }
  else{
    printf("sem raizes reais...\n");
  }
  return 0;
}



