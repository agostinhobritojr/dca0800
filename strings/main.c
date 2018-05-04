#include <stdio.h>
#include <string.h>

int main(){
  char c;
  char nome[100], rev[100];
  c = 97;
  printf("c = %d\n", c);
  printf("c = %c\n", c);

  nome[0] = 106; nome[1] = 111;
  nome[2] = 115; nome[3] = 101;
  nome[4] = 0;
  printf("nome = %s\n", nome);
  // copia o literal jose para a
  // variavel nome
  strcpy(nome, "jose");
  printf("nome = %s\n", nome);

  strcat(nome, " da silva");
  printf("nome = %s\n", nome);

  printf("tamanho = %d\n", strlen(nome));

  int i =0;
  for(i=strlen(nome)-1;i>=0;i--){
    printf("%c",nome[i]);
  }
  printf("\n");

  return 0;
}
