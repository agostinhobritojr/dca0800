#include <stdio.h>
#include <math.h>

int main(){
  // P1(x1,y1), P2(x2,y2), P3(x3,y3)
  float x1, y1, x2, y2, x3, y3;
  float l1, l2, l3, tmp;

  printf("Digite P1, x: ");
  scanf("%f", &x1);
  printf("Digite P1, y: ");
  scanf("%f", &y1);

  printf("Digite P2, x: ");
  scanf("%f", &x2);
  printf("Digite P2, y: ");
  scanf("%f", &y2);

  printf("Digite P3, x: ");
  scanf("%f", &x3);
  printf("Digite P3, y: ");
  scanf("%f", &y3);

  l1 = sqrt( (x1-x2)*(x1-x2)+
             (y1-y2)*(y1-y2));

  l2 = sqrt( (x1-x3)*(x1-x3)+
             (y1-y3)*(y1-y3));

  l3 = sqrt( (x3-x2)*(x3-x2)+
             (y3-y2)*(y3-y2));

  // troca os comprimentos para
  // garantir que o maior deles
  // ficarah em l1
  if(l1 < l2){
    tmp=l1; l1=l2; l2=tmp;
  }
  if(l1 < l3){
    tmp=l1; l1=l3; l3=tmp;
  }
  if(l1 < l2 + l3){
    printf("Os pontos formam um triangulo\n");
  }
  else{
    printf("Os pontos NAO formam um triangulo\n");
  }
  if( (l1==l2)&&(l2==l3) ){
    printf("Equilatero\n");
  }
  else if ((l1==l2)||(l2==l3)||
           (l1==l3)){
    printf("Isoceles\n");
  }
  else{
    printf("Escaleno\n");
  }



  return 0;
}
