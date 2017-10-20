#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arquivo, *saida;
  int nlinhas, ncolunas;
  int i,j;
  int m[100][100];
  arquivo = fopen("/home/ambj/alo.txt","r");
  if(arquivo == NULL){
    printf("nao abriu o arquivo\n");
    exit(0);
  }
  fscanf(arquivo,"%d %d", &nlinhas, &ncolunas);
  printf("a matriz tem %d linhas e %d colunas\n",
         nlinhas, ncolunas);
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      fscanf(arquivo,"%d",&m[i][j]);
    }
  }
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      printf("%d ",m[i][j]);
    }
    printf("\n");
  }

  saida = fopen("/home/ambj/alo.html","w");
  fprintf(saida,"<html><body>\n");
  fprintf(saida,"<h1>Minha Tabela</h1>\n");
  fprintf(saida,"<table border=\"1\">\n");
  for(i=0; i<nlinhas; i++){
    fprintf(saida,"<tr>\n");
    for(j=0; j<ncolunas; j++){
      fprintf(saida,"<td> %d </td>",m[i][j]);
    }
    fprintf(saida,"</tr>\n");
  }
  fprintf(saida,"</table>\n");
  fprintf(saida,"</body></html>\n");


  return 0;
}
