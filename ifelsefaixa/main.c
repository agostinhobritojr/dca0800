#include <stdio.h>

int main(){
  int x;
  printf("digite x: ");
  scanf("%d", &x);
  /*
  if( (x<70) || (x>=100) ){
    printf("valor na faixa\n");
  }
  else{
    printf("valor fora da faixa\n");
  }*/

  if(((x>20) && (x<=50)) ||
     ((x>=100) && (x<=120))){
    printf("valor na faixa");
  }
  return 0;
}
