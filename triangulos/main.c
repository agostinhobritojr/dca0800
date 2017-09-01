#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415
#define COS_ZERO 1.0
int main(void){
  float x0, y0, x1, y1, x2, y2;
  float teste;
  float d1, d2, d3;

  x0 = 3;  y0 = 2;
  x1 = 9;  y1 = 2;
  x2 = 6;  y2 = 5;

/*  x0 = 3;  y0 = 4;
  x1 = 6; y1 = 8;
  x2 = 12;  y2 = 16;
*/
  teste = ( (x0-x1)*(x2-x1)+(y0-y1)*(y2-y1) )/
      (sqrt(pow(x0-x1,2)+pow(y0-y1,2))*
       sqrt(pow(x2-x1,2)+pow(y2-y1,2)));

  teste = fabs(teste);

  if(teste == COS_ZERO){
    printf("os pontos sao colineares\n");
    exit(0);
  }
  printf("angulo = %f\n", teste*180/PI);

  d1 = sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
  d2 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  d3 = sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2));

  // testando se sao equilateros
  if( (d1 == d2) && (d2 == d3) ){
    printf("eh equilateros\n");
  }
  else{
    //testando se sao isoceles
    if((d1 == d2) ||
       (d2 == d3) ||
       (d3 == d1)
       ){
      printf("eh isoceles\n");
    }
    else{
      printf("eh escaleno\n");
    }
  }
  return 0;
}












