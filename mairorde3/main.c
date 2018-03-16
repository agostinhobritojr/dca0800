#include <stdio.h>

int main()
{
  float x, y, z;
  float maior;
  printf("digite x: ");
  scanf("%f", &x);
  printf("digite y: ");
  scanf("%f", &y);
  printf("digite z: ");
  scanf("%f", &z);
  maior = x;
  if(y > maior){
    maior = y;
  }
  if(z > maior){
    maior = z;
  }
  if( (x+y+z-maior) < maior ){
    printf("o maior eh maior que"
           " a soma dos outros\n");
  }

  printf("o maior eh %f\n", maior);



  return 0;
}
