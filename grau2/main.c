#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c;
  float x1, x2;
  float delta;

  printf("solucionado de equacao"
         "grau 2\n");
  printf("=> ax^2+bx+c=0\n");
  printf("Digite a: "); scanf("%f", &a);
  printf("Digite b: "); scanf("%f", &b);
  printf("Digite c: "); scanf("%f", &c);
  delta = b*b - 4*a*c;
  if(delta == 0){
    x1 = x2 = -b/(2*a);
    printf("raizes iguais\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }
  else if(delta > 0){
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    printf("raizes distintas\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }
  else{
    printf("sem raizes reais\n");
  }
  return 0;
}
