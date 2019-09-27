#include <stdio.h> // para printf
#include <string.h> // para fgets
#include <ctype.h> // para toupper
#include <stdlib.h> // para atoi
int main(){
  char prenome[40], sobrenome[40], nome[80];
  char nome1[40], nome2[40];
  int tam, i;

  printf("Digite o nome: ");
  fgets(nome, 40, stdin);

  tam = strlen(nome);

  for (i=0; i<tam; i++) {
    nome[i] = toupper(nome[i]);
  }

  puts(nome);

  for (i=0; i<tam; i++) {
    nome[i] = tolower(nome[i]);
  }

  puts(nome);

  printf("Digite o nome1: ");
  fgets(nome1, 40, stdin);

  printf("Digite o nome2: ");
  fgets(nome2, 40, stdin);

  if(strcmp(nome1, nome2) < 0){
    printf("o primeiro na ordem eh %s", nome1);
  }
  else{
    printf("o primeiro na ordem eh %s", nome2);
  }

  printf("Digite o inteiro: ");
  scanf("%d", &i);
  sprintf(nome, "%d", i);
  printf("o valor eh %s\n", nome);

  for (i=0; i<strlen(nome); i++) {
    putchar(nome[i]);
    putchar(' ');
  }
  printf("\n");

  printf("digite o literal: ");
  fgets(nome, 10, stdin);
  fgets(nome, 10, stdin);

  // #include <stdlib.h>
  tam = atoi(nome);
  printf("tam = %d\n", tam);

  /*
  // copia o literal "Agostinho" para o prenome
  strcpy(prenome,"Agostinho");
  // copia o literal "Brito" para o sobrenome
  strcpy(sobrenome, "Brito");

  puts(prenome);
  puts(sobrenome);

  // copia "Agostinho" para nome
  strcpy(nome, prenome);
  // concatena (acrescenta) o espaco
  strcat(nome," ");
  // concatena o sobrenome
  strcat(nome, sobrenome);

  // exibe o nome na saida
  puts(nome);
  */
  return 0;
}
