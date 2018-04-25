#include <stdio.h>

int main(void){
  int paranumeros, i, j, paradivisor;
  int div;
  div = 20;
  paranumeros = 0;
  for(int i=1; paranumeros == 0 ;i++){
    paradivisor = 0;
    for(int j=1; j<=div && paradivisor == 0; j++){
      if(i%j != 0){
        paradivisor = 1;
      }
    }
    if(paradivisor == 0){
      printf("numero = %d\n", i);
      paranumeros = 1;
    }
  }
}
