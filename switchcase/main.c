#include <stdio.h>
#include "funcoes.h"

int main(){
  int opcao;
  menu();
  printf("digite sua escolha: ");
  scanf("%d", &opcao);
  printf("Escolheu opcao %d\n", opcao);

  switch (opcao) {
  case 1:
    printf("Escolheu estudar\n");
  case 2:
    printf("Escolheu lanchar\n");
    break;
  default:
    break;
  }

  return 0;
}
