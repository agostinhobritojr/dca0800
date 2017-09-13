#include <stdio.h>
#include <stdlib.h>

int max(int x[], int n){
  int i;
//  x[0] = 20;
  int max=x[0];
  for(i=1; i<n; i++){
    printf("max = %d, x[i] = %d\n", max, x[i]);
    if(x[i] > max){
      max = x[i];
    }
  }
  return max;
}

void ordena(int x[], int n){
  int i, j;
  int tmp;
  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(x[i] < x[j]){
        tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
      }
    }
  }
}

void funcao(int x){
  printf("x = %d\n", x);
  x = 3;
  printf("x = %d\n", x);
}

void funcaomatriz(int x[][10], int nl, int nc){
  x[1][2] = 4;
}

int main(void){
  int x[10];
  int y[10][10];

  funcaomatriz(y, 10, 10);

  int i;

  int a;
  a=2;
  printf("a = %d\n", a);
  funcao(a);
  printf("a = %d\n", a);

  printf("\n\n\n");

  for(i=0; i<10; i++){
    x[i] = rand()%100-100;
  }

  printf("maximo = %d\n", max(x,10));
  for(i=0; i<10; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  // ordena o array na ordem crescente
  ordena(x, 10);

  for(i=0; i<10; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");


  return 0;
}

