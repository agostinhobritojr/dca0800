#include <stdio.h>

int main(void){
  int velmax, vel;
  printf("digite a velocidade maxima da via: ");
  scanf("%d", &velmax);
  printf("digite a velocidade dirigida: ");
  scanf("%d", &vel);
  if(vel > velmax && vel <= velmax+10){
	printf("multa = 50 reais\n");
  }
  if(vel > velmax+11 && vel <= velmax+30){
	printf("multa = 100 reais\n");
  }
  if(vel > velmax+31){
	printf("multa = 200 reais\n");
  }
}
