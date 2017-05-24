#include <stdio.h>
#include <stdlib.h>

int main(void){
  int opcao;
  int retorno;

  while(1){
    printf("digite a opcao: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 0:
      printf("digitou opcao zero\n");
      break;
    case 1:
      printf("fez outra coisa\n");
      break;
    case 4:
      printf("chamando o firefox...");
      retorno = system("/usr/bin/firefox");
      printf("retorno = %d", retorno);
    case 3:
      exit(0);
    default:
      printf("indeciso\n");
    }
  }


  return 0;
}
