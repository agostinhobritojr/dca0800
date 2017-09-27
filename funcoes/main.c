#include <stdio.h>
// o arquivo de header eh necessario para
// que as funcoes desenvolvidas sejam
// verificadas na compilacao.
//
// Em outras palavras, o compilador
// verifica se as funcoes foram chamadas
// corretamente pelo programador, tanto em
// termos dos tipos de dados passados como
// parametros quanto se há ou não valor de
// retorno para a funcao
//

#include "funcoes.h"
#include "funcoes.h"

int main(void){
  long a, b;
  int x;

  x = numero();

  printf("x = %d", x);

  a = 4;

  b = fatrec(a);

  printf("a = %ld; b = %ld\n", a,b);

  return 0;
}

