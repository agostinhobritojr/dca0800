#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *arquivo;
  int x;
  int nlinhas, ncolunas;
  int m[100][100];
  int i, j;
  // fopen(caminho, modo de abertura);
  // se "alo.txt" nao existe, a funcao
  // fopen cria o arquivo
  // se "alo.txt" existe, a funcao
  // fopen o apaga, e cria um novo arquivo

  // linux
  arquivo = fopen("/home/ambj/alo.txt","w");
  if(arquivo == NULL){
    printf("nao abriu o arquivo\n");
    exit(0);
  }

  printf("digite a quantidade de linhas: ");
  scanf("%d", &nlinhas);
  printf("digite a quantidade de colunas: ");
  scanf("%d", &ncolunas);

  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      m[i][j] = rand()%101;
    }
  }

  fprintf(arquivo,"%d %d\n", nlinhas, ncolunas);

  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      fprintf(arquivo,"%d ", m[i][j]);
    }
    fprintf(arquivo,"\n");
  }

  // windows
  //arquivo = fopen("c:/teste/alo.txt","w");

/*  fprintf(arquivo, "Agostinho Brito\n");
  x = 7;
  fprintf(arquivo, "O valor de x eh %d\n", x);
  */
  fclose(arquivo);

  return 0;
}
