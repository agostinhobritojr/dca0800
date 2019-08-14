#include <stdio.h>

int main(){
  int i;
  // SEMPRE inicialize as variaveis
  float idade, soma=0;
  int nidades;
  float x;

  x = 5.0/2;
  printf("x = %f\n", x);


  // NUNCA confie que um ACUMULADOR
  // inicia com o valor igual a ZERO
  soma = 0;
  printf("Digite o numero de alunos: ");
  scanf("%d", &nidades);
  for (i=1 ; i<=nidades; i=i+1){
    printf("iteracao %d\n", i);
    printf("Digite a idade: ");
    scanf("%f", &idade);
    soma = soma + idade;
  }
  printf("soma  = %f\n", soma);
  printf("media = %f\n", soma/5);
  return 0;
}
