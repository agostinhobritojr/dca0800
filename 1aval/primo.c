#include <stdio.h>

int main(void){
  long int i, j;
  int contaprimo;
  long int primo;
  int posicao=10001;
  int testaprimo;

  contaprimo = 0;
  for(i=2; contaprimo!=posicao; i++){
    // inicialmente, assume-se que o numero
    // EH primo
    // variahveis "flag"
    testaprimo = 0;
    for(j=2; j<i && testaprimo == 0; j++){
      if(i%j == 0){
        testaprimo = 1;
      }
    }
    if(testaprimo == 0){
      contaprimo++;
      primo = i;
    }
  }
  printf("primo = %ld\n",primo);
}
