#include<stdio.h>
int main(){
  int levels;
  int i, j;
  printf("digite o numero: ");
  scanf("%d",&levels);
  for(i=1; i<=levels; i++){
    for(j=0; j<i; j++){
      printf("%d", i);
    }
    printf("\n");
  }
  for(i=levels-1; i>0; i--){
    for(j=0; j<i; j++){
      printf("%d", i);
    }
    printf("\n");
  }
}
