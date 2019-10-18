#include <stdio.h>

int main(){
  FILE *fin;
  char nome[40];


  fin = fopen("/home/ambj/literais.txt","r");
  while(feof(fin) == 0){
//    fscanf(fin,"%s", nome);
    fgets(nome,40,fin);
    if(feof(fin) == 0){
      printf("leu: %s\n", nome);
    }
  }
  return 0;
}
