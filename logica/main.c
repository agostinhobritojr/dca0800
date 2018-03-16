#include <stdio.h>

int main(){
  int x, y;
  printf("Digite x: ");
  scanf("%d", &x);
  if((x > -2) && (x < 3)){
    // codigo indentado
    // deslocado alguns espacos para
    // a direita para facilitar a
    // a legibilidade do texto
    printf("alo\n");
  }

  if(((x >= 2)&&(x < 4))||
     ((x >= 5)&&(x < 10))){
    printf("esta nas faixas\n");
  }
  return 0;
}
