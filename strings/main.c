#include <stdio.h>
#include <string.h>

int main(void){
  int i;
  char nome[40] = "jose maria";
  char nome2[40];
  char nome3[40];
  puts(nome);
  for(i=0; i<strlen(nome); i++){
    printf("%c = %d\n", nome[i], nome[i]);
  }
  /*

{
  printf("%s\n",nome);
  nome[0]='J';
  nome[0]='0';
  nome[5]='M';
  printf("%s\n",nome);

  printf("digite o nome: ");
  fgets(nome,40,stdin);
  puts(nome);
//  scanf("%s", nome);
//  puts(nome);
}
  // INSIRA A FUNCAO AQUI
  strcpy(nome2,nome);
  puts(nome2);
*/
  // le "jose"
  printf("digite o primeiro nome: ");
  fgets(nome, 40, stdin);
  // le "maria"
  printf("digite o segundo nome: ");
  fgets(nome2, 40, stdin);

  nome[strlen(nome)-1]=0;
  nome2[strlen(nome2)-1]=0;

  printf("tamanho de nome = %d",strlen(nome));

  // copia "jose" para nome3
  strcpy(nome3, nome);

  strcat(nome3, " ");
  strcat(nome3, nome2);
  // concatena nome e nome2 em nome3
  puts(nome3);

  if(strcmp(nome,"jose") == 0){
    printf("digitou jose\n");
  }else if(strcmp(nome,"Jose") < 0){
    printf("%s vem antes de Jose", nome);
  }
  else{
    printf("%s vem depois de Jose", nome);

  }

  return 0;
}





