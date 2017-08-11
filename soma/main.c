#include <stdio.h>

int main(void){
  int a, b, c, soma;

  float z;

  z = 3.4;

  printf("z = %f\n", z);

  printf("digite o valor de a: ");
  scanf("%d", &a);
  printf("digite o valor de b: ");
  scanf("%d", &b);
  printf("digite o valor de c: ");
  scanf("%d", &c);
  soma = a + b + c;
  printf("soma = %d\n", soma);


  if((soma >= 15) && (soma <= 20)){
    printf("soma dentro do intervalo\n");
  }


  if( soma > 20 ){
    printf("a soma eh maior que 20\n");
  }
  else{
    if( soma < 15 ){
      printf("soma menor que quinze");
    }
    printf("a soma nao eh maior que 20\n");
  }

  return 0;
}

