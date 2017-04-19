#include <stdio.h>

int main(void){
  int i;
  char nome[40] = "jose maria";
  puts(nome);
  for(i=0; i<strlen(nome); i++){
    printf("%c = %d\n", nome[i], nome[i]);
  }

  printf("%s\n",nome);
  nome[0]='J';
  nome[5]='M';
  printf("%s\n",nome);

  return 0;
}

