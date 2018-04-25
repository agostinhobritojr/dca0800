#include <stdio.h>

int main(void){
  int x;
  float y;
  printf("digite o numero: ");
  scanf("%f",&y);
  printf("parte inteira    : %d\n",(int)y);
  printf("parte fracionaria: %f\n",y - (int)y);
}
