#include <stdio.h>

int main(){
  // declara uma matriz x
  // com 4 linhas e quatro colunas
  // x[numero de linhas][numero de colunas]
  int x[4][4];
  int i, j;
  for (i=0; i<4; i++) {
    for (j=0; j<4; j++) {
      x[i][j] = i+j;
    }
  }
  printf("matriz = \n");
  for (i=0; i<4; i++) {
    for (j=0; j<4; j++) {
      printf("%d, ", x[i][j]);
    }
    printf("\n");
  }


  return 0;
}
