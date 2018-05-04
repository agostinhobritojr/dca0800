#include <stdio.h>
#include "funcoes.h"
#include "funcoes2.h"
#include <stdlib.h>

int main(){
  int opcao;
  do{
    menu();
    scanf("%d", &opcao);
    switch (opcao){
    case 0:
      printf("prox = %d\n", proximo(6));
      break;
    case 1:
      printf("fat  = %d\n", fat(6));
      break;
    case 2:
      exit(0);
    default:
      printf("opcao inexistente\n");
      break;
    }
  }while(1);
  return 0;
}
