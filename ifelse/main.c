#include <stdio.h>

int main(){
  int v, vlim;
  vlim = 80;
  v = 88;
  if(v > vlim){
    printf("acima limite\n");
  }
  else{
    printf("dentro limite\n");
  }

  if( (v>=80) && (v<=100)){
    printf("dentro intervalo\n");
  }
  if( v >= 80){
    if( v <= 100){
      printf("dentro intervalo\n");
    }
  }

  return 0;
}
