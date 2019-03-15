// headers
// diretiva de compilacao de inclusao
#include <stdio.h>

int main(){
  /*declaracao de variaveis*/
  // fim de linha
  int alo;
  int b, maria123;
  int x, y, z;
  x=3;
  y=7;
  z=x+y;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  printf("exp = %d\n", (5-3)*8-2);
  printf("%d + %d = %d\n",x,y,z);

  // scanf, leia um inteiro
  // do teclado e guarde na
  // posicao de memoria da maquina
  // onde esta a variavel x
 // scanf("%d", &x);
 // printf("x = %d\n", x);
  printf("digite x: ");
  scanf("%d", &x);
  printf("%d", x+1);
  printf("digite y: ");
  scanf("%d", &y);
  printf("x = %d e y = %d\n",x,y);
  printf("digite a temp: ");
  scanf("%d", &x);
  printf("temp = %d\n", x);
  printf("5/2 = %d", 5/2);
  return 0;
}


