#include <stdio.h>

int main(){
  float x;
  printf("digite x: ");
  scanf("%f", &x);

  if(x > 40){
    if(x <= 50){
      printf("x esta dentro do intervalo\n");
    }
    else{
      printf("x esta fora do intervalo\n");
    }
  }
  else{
    printf("x esta fora do intervalo\n");
  }

  if((x>40)&&(x<=50)){
    printf("x esta dentro do intervalo\n");
  }
  else{
    printf("x esta fora do intervalo\n");
  }

  return 0;
}
