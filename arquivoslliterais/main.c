#include <stdio.h>

int main(){
  FILE *fin;
  char nome[40];
  int i;

  fin = fopen("/home/ambj/literais.txt","r");
  do{
    fscanf(fin,"%s", nome);
    printf("leu: %s\n", nome);
  }while(feof(fin) == 0);
  return 0;
}
