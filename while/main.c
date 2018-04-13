#include <stdio.h>

int main(){
  int x;
  x = 1;
  // primeiro testa a condicao
  // para depois executar os comandos
  while(x <= 5){
    printf("%d\n", x);
    x++;
  }
  x = 1;
  printf("\n");
  // primeiro executa os comandos
  // para depois testar a condicao
  do{
    printf("%d\n", x);
    x++;
  }while(x <=5);

  return 0;
}
