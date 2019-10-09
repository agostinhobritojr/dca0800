#include <stdio.h>

void menu(){
  printf("+-------------------+\n");
  printf("+-- MENU -----------+\n");
  printf("+-------------------+\n");
  printf("| 1.Entrar dados    |\n");
  printf("| 2.Mostrar dados   |\n");
  printf("| 3.Processar dados |\n");
  printf("| 4.Sair            |\n");
  printf("+-------------------+\n");

}

int main(){
  int num;

  menu();
  printf("Digite uma opcao: ");
  scanf("%d", &num);
  printf("Voce escolheu: ");

  switch (num) {
  case 1:
    printf("Entrar dados\n");
    break;
  case 2:
    printf("Mostrar dados\n");
    break;
  case 3:
    printf("Processar dados\n");
    break;
  case 4:
    printf("Sair\n");
  }
  return 0;
}
