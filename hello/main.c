#include <stdio.h>

int z; // variavel global

int main(void){
  /* declaracao de variaveis */
  int x, y; // variavel local

  printf("Agostinho Brito açúcar\n");
  printf("digite um valor: ");
  /* comentario */

  /* le um inteiro e escreve no endereco
   * de memoria associado com a variavel x
   */
  scanf("%d", &x); /* comentario */

  z = 4;
  printf("z = %d", z);

  y = x + 1;

  printf("o valor de x = %d\n", x);
  printf("o valor de y = %d\n", y);

  y = 4+3*8;

  printf("o valor de y = %d\n", y);

  y = 5/8;

  printf("o valor de y = %d\n", y);

  return 0;
}

