#include <stdio.h> /* para printf e scanf */
#include <math.h>

int main(void){
  double x1, y1, x2, y2, x3, y3;
  double d12, d23, d13;
  float maior, media, menor;
  x1 = 0; y1 = 0;
  x2 = 0; y2 = 3;
  x3 = 2; y3 = 0;
  
  d12 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  d23 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  d13 = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  printf("d12 = %f; d23 = %f; d13 = %f\n", d12, d23, d13);
  maior = d13;
  if(d12 > maior){
	maior = d12;
  }
  if(d23 > maior){
	maior = d23;
  }

  menor = d13;
  if(d12 < menor){
	menor = d12;
  }
  if(d23 < menor){
	menor = d23;
  }
  media = d12+d23+d13-maior-menor;
  printf("maior = %f; media = %f; menor = %f\n",
		 maior, media, menor);

  if(maior < menor + media){
	printf("os pontos formam um triangulo ");
	if(maior == menor){
	  printf("equilatero\n");
	}
	else {
	  if((maior == media) || (media == menor) ){
		printf("isoceles\n");
	  }
	  else{
		printf("escaleno\n");
	  }
	}
  }
  else{
	printf("os pontos nao formam um triangulo");
  }
  
}

