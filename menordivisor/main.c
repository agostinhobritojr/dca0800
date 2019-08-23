#include <stdio.h>

int main(){
  int x, div;
  int achei=0; // flags
  // gera os numeros para serem testados
  for (x=1; achei==0 ;x++){
    // parte do principio que o numero
    // testado eh o que se procura
    achei = 1;
    for (div = 2; div<=20 && achei==1; div++) {
      // se um dos restos for zero...
      if(x%div != 0){
        // o numero nao eh o procurado.
        achei=0;
      }
    }
  }
  x--;
  printf("%d\n", x);
  return 0;
}
