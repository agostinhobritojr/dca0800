#include <stdio.h>

int main(){
  FILE *f;
  int nl, nc;
  char nome[100];
  int matriz[10][10];
  int i, j;

  f = fopen("/home/ambj/teste.txt","w");
  fprintf(f, "Agostinho Brito\n");
  fclose(f);

  f = fopen("/home/ambj/teste.txt","r");
  fscanf(f,"%s", nome);
  printf("nome = %s\n", nome);
  fclose(f);

  f = fopen("/home/ambj/matriz.txt","r");
  fscanf(f,"%d", &nl);
  fscanf(f,"%d", &nc);

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      fscanf(f, "%d", &matriz[i][j]);
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", matriz[i][j]);
    }
    printf("\n");
  }

  fclose(f);

  f = fopen("/home/ambj/matriz.csv","w");
  for(i=0; i<nl; i++){
    for(j=0; j<nc-1; j++){
      fprintf(f, "%d,", matriz[i][j]);
    }
    fprintf(f, "%d", matriz[i][nc-1]);
    fprintf(f, "\n");
  }
  fclose(f);

  return 0;
}






