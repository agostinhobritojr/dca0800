#include <stdio.h>
#include "funcoes.h"

int main(){
  int opcao;

  do{
    menu();
    printf("digite sua escolha: ");
    scanf("%d", &opcao);
    printf("Escolheu opcao %d\n", opcao);

    switch (opcao) {
    case 1:
      printf("Escolheu estudar\n");
      break;
    case 2:
      printf("Escolheu lanchar\n");
      break;
    case 3:
      printf("Escolheu dormir\n");
      break;
    case 4:
      printf("Escolheu programar\n");
      break;
    case 5:
      printf("Escolheu lazer\n");
      break;
    case 6:
      break;
    default:
      printf("nao existe essa opcao\n");
      break;
    }
  }while(opcao != 6);
  return 0;
}
