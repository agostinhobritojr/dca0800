// arquivo de header
#include <stdio.h>
#include <math.h>

int main(void){
  // declara uma variavel do tipo inteiro
  int valor;
  float alo;

  int a, b, c;

  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  c = a + b;
  printf("a+b = %d\n", c);
  printf("%d+%d = %d\n",a, b, c);





  alo = 10./3;
  printf("alo = %f\n", alo);

  valor = 10.0/3;
  printf("valor = %d\n", valor);

  printf("Digite o valor: ");
  scanf("%d", &valor);
  printf("Voce digitou %d\n", valor);
  valor = valor + 1;
  printf("O resultado = %d\n", valor);
  printf("hello, world! ");
  printf("hello, world!\n");
}
