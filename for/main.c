#include <stdio.h>

int main(){
  int i, soma;
  int idade, nAlunos;
  // INICIALIZACAO DAS
  // VARIAVEIS
  soma = 0;
  printf("digite nalunos: ");
  scanf("%d", &nAlunos);

  for(i=1; i<=nAlunos; i=i+1){
    printf("digite a idade: ");
    scanf("%d", &idade);
    soma = soma + idade;
  }
  printf("soma = %d\n",
         soma);
  printf("media = %d",
         soma/nAlunos);
  return 0;
}
