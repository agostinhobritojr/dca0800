#include <stdio.h>
#include <stdlib.h>

int main()
{
  // file guardarah as informacoes
  // do arquivo a ser aberto
  FILE *file;
  FILE *fileout;
  int x, y;
  // "c:/usuarios/Documentos/alo.txt"
  // "alo.txt"
  // "w": abre para escrita
  // "r": abre para leitura
  file =
      fopen("/home/ambj/nome.txt",
               "w");
  if(file == NULL)
    exit(0);
  // imprime no arquivo
  fprintf(file, "Agostinho Brito\n");

  // fecha o arquivo
  fclose(file);

  // no bloco de notas: ANSI
  file =
      fopen("/home/ambj/numeros.txt",
            "r");

  fscanf(file,"%d %d", &x, &y);
  //printf("%d, %d\n", x, y);

  fclose(file);

  file =
      fopen("/home/ambj/entrada.txt","r");

  // entrada.txt
  // 3 4
  // 1 2 5 4
  // -1 2 3 5
  // 0 0 3 8

  int m[10][10];
  int nl, nc;

  fscanf(file,"%d %d", &nl, &nc);

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      fscanf(file,"%d", &m[i][j]);
    }
  }

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      printf("%2d ", m[i][j]);
    }
    printf("\n");
  }

  fileout = fopen("/home/ambj/saida.txt",
                  "w");

  fprintf(fileout,"%d %d\n", nc, nl);

  for(int i=0; i<nc; i++){
    for(int j=0; j<nl; j++){
      fprintf(fileout,"%2d ", m[j][i]);
    }
    fprintf(fileout, "\n");
  }

  //  fscanf(file,"%d", &x[i][j]);

  // saida.txt
  // 4 3
  // 1 -1 0
  // 2 2 0
  // 5 3 3
  // 4 5 8








  return 0;
}
