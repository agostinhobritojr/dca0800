#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float fmedia(float x[], int n){
  float media;
  int i;
  media = 0;
  // soma todos os valores lidos
  for(i=0; i<n; i++){
    media = media + x[i];
  }
  media = media/n;
  return (media);
}

int main(void){
  // criar um array de 10 inteiros
  // array, arranjo, vetor
  float x[100];
  float y[6] = {1,4,7,6,-2,1};

  float z[4][4];
  float w[4][4]; // w = z^T;
  float media, desvio;
  float tmp;
  int nalunos;
  int i, j;

  printf("media = %f\n\n", fmedia(y,6));

  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      z[i][j] = rand()%10;
    }
  }

  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      printf("%4.3f ", z[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      w[i][j] = z[j][i];
    }
  }

  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      printf("%4.3f ", w[i][j]);
    }
    printf("\n");
  }










  int n;
  /* nao utilizar esse tipo de construcao
  printf("digite n: ");
  scanf("%d",&n);
  int z[n];
  */
  {
    printf("Digite o numero de alunos: ");
    scanf("%d", &nalunos);

    for(i=0; i<nalunos; i++){
      printf("Digite idade %d: ", i);
      scanf("%f", &x[i]);
    }
    for(j=i; j<100; j++){
      x[j] = 0;
    }

    for(i=0; i<nalunos; i++){
      printf("x[%d] = %f\n",i, x[i]);
    }

    media = 0;
    // soma todos os valores lidos
    for(i=0; i<nalunos; i++){
      media = media + x[i];
    }
    media = media/nalunos;

    desvio = 0;
    for(i=0; i<nalunos; i++){
      tmp = x[i]-media;
      desvio = desvio + tmp*tmp;
    }
    desvio = sqrt(desvio/(nalunos-1));
    printf("media = %f\n", media);
    printf("desvio = %f\n",desvio);
  }
  return 0;
}






