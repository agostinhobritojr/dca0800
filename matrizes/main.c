#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NLK 15
#define NCK 15

#define ALO x*x

int main(void){
  int y[3][4], w[3][4];
  int z[4][3], k[NLK][NCK];
  int nl, nc;
  int nlz, ncz;
  int nlk, nck;
  int i, j;

  nl = 3;
  nc = 4;

  do{
    printf("digite o numero de linhas : ");
    scanf("%d", &nlk);
  } while(nlk > NLK);

  do{
  printf("digite o numero de colunas: ");
  scanf("%d", &nck);
  } while(nck > NCK);

  for(i=0; i<nlk; i++){
    for(j=0; j<nck; j++){
      k[i][j] = rand()%100;
    }
  }
  printf("matrizk\n");
  for(i=0; i<nlk; i++){
    for(j=0; j<nck; j++){
      printf("%2d ", k[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\n");


  srand(time(0));

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = rand()%100;
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      w[i][j] = y[i][j];
    }
  }
  // calcula a matriz transposta
  nlz = nc;
  ncz = nl;
  for(i=0; i<nlz; i++){
    for(j=0; j<ncz; j++){
      z[i][j] = y[j][i];
    }
  }
  printf("\n");
  for(i=0; i<nlz; i++){
    for(j=0; j<ncz; j++){
      printf("%2d ", z[i][j]);
    }
    printf("\n");
  }


  return 0;
}







