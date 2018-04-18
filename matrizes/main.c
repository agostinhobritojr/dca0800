#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x[10][10], y[10][10];
  float max, min;
  // preencher a matriz y com a
  // transposta de x
  int i, j;
  int nlin, ncol;
  nlin = 10;
  ncol = 10;
  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      x[i][j] = rand()%20;
    }
  }
  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      printf("%4.1f ", x[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      y[i][j] = x[j][i];
    }
  }
  // procura o minimo e o maximo
  max = min = x[0][0];
  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      if(x[i][j] > max)
        max = x[i][j];
      if(x[i][j] < min)
        min = x[i][j];
    }
  }
  // realiza a normalizacao
  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      x[i][j] = (x[i][j]-min)/(max-min);
    }
  }
  printf("\n");
  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      printf("%4.1f ", x[i][j]);
    }
    printf("\n");
  }
  return 0;
}
