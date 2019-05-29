#include <stdio.h>

struct alo{
  // o compilador agrupa
  // as variaveis em grupos
  // de 4 bytes, inserindo
  // espacos vazios para
  // completar lacunas
  char c;
  char b;
  int a;
};

int main(){
  struct alo x;
  printf("tamanho = %d\n",
         sizeof(x));

  return 0;
}
