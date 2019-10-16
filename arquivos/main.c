#include <stdio.h>

int main(){
  FILE *fout, *fin;
  int x[5];
  int a, b;
  int i;

  // criar valores aleatorios para x
  // e guardar o vetor no arquivo saida.txt

  fout = fopen("/home/ambj/saida.txt", "w");
  fin = fopen("/home/ambj/entrada.txt", "r");

  fscanf(fin, "%d", &a);
  fscanf(fin, "%d", &b);
  printf("%d e %d\n", a, b);

  for (i=0; i<5; i++) {
    x[i] = i + 1;
    fprintf(fout, "%d ", x[i]);
  }

  fclose(fout);
  return 0;
}
