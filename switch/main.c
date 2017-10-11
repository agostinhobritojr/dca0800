#include <stdio.h>

void menu(void){
  printf("\n1 - somar\n"
         "2 - subtrair\n"
         "3 - multiplicar\n"
         "4 - dividir\n"
         "5 - ler x\n"
         "6 - ler y\n"
         "7 - sair\n");
  printf("digite a opcao: ");
}


int main(void){
  int opcao;
  int x, y;
  opcao = 0;
  do{
    menu();
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
      printf("soma = %d\n", x+y);
      break;
    case 2:
      printf("subtracao = %d\n", x-y);
      break;
    case 3:
      printf("multiplicacao = %d\n", x*y);
      break;
    case 4:
      printf("divisao = %d\n", x/y);
      break;
    case 5:
      printf("digite x: ");
      scanf("%d", &x);
      break;
    case 6:
      printf("digite y: ");
      scanf("%d", &y);
      break;
    default:
      printf("escolheu outra opcao\n");
    }
  }while(opcao != 7);


  return 0;
}

