#include <stdio.h>

float somaMat(
    float x[40][40],
int nlinhas,
int ncolunas){
  int i, j;
  float soma=0;
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      soma = soma+
          x[i][j];
    }
  }
  return soma;
}

int main(){
  float a[] = {4,5,6};
  float x[3][4] = {
    {3,4,1,2},
    {0,-3,9,8},
    {0,0,4,5}
  };
  float y[4][3];
  int i, j;

  for(i=0; i<3; i++){
    for(j=0; j<4; j++){
      printf("%4.1f ", x[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<4; i++){
    for(j=0; j<3; j++){
      y[i][j] = x[j][i];
    }
  }
  printf("\n");
  for(i=0; i<4; i++){
    for(j=0; j<3; j++){
      printf("%4.1f ", y[i][j]);
    }
    printf("\n");
  }

  printf("A soma de x = %f\n",
         somaMat(x,3,4));
  return 0;
}
