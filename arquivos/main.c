#include <stdio.h>
#include <stdlib.h>

int main(void){
  FILE *arq;
  int x[4][5];
  char nome[100];
  int i, j;
  int nl, nc;
  arq = fopen("/home/ambj/testearq.txt","w");

  if(arq == NULL){
    exit(0);
  }
  fprintf(arq,"Agostinho Brito \n");
  fprintf(arq,"%d %d\n", 4, 5);
  for(i=0; i<4; i++){
    for(j=0; j<5; j++){
      x[i][j] = rand()%100;
    }
  }
  for(i=0; i<4; i++){
    for(j=0; j<5; j++){
      fprintf(arq,"%d ", x[i][j]);
    }
    fprintf(arq,"\n");
  }

  fclose(arq);

  arq = fopen("/home/ambj/testearq.txt", "r");
  fgets(nome,100,arq);
  puts(nome);
  fscanf(arq,"%d %d",&nl, &nc);
  printf("%d %d\n", nl, nc);
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      fscanf(arq,"%d", &x[i][j]);

    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }


  return 0;
}





