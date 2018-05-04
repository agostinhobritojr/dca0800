#include "funcoes.h"
#include <stdio.h>

// implementacao da funcao proximo
int proximo(int x){
  int y ;
  y = x+1;
  return y;
}

void menu(void){
  printf("opcoes -----\n");
  printf("0 - executar prox\n");
  printf("1 - executar fat\n");
  printf("Escolha sua opcao: ");
}
