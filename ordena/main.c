#include <stdio.h>
#include <stdlib.h>

int main(void){
  int x[10];
  int n=10;
  int i, j, tmp;

  for(i=0; i<n; i++){
    x[i] = rand()%100;
  }

  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      // comparar x[i] com x[j]
      if(x[i] > x[j]){
        tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
      }
    }
  }

  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  return 0;
}

