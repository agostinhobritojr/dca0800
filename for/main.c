#include <stdio.h>

int main(void){
  int i;
  int j;
  // testaprimo verifica se o numero eh primo
  // se o valor for igual a 0, o numero ainda eh primo
  // se o valor for igual a 1, o numero nao eh primo
  int testaprimo;

  int soma;

  // a variavel "i" eh usada como contador
  // de ocorrencias
  /*
  for(i=1 ; i<=50; i++){
    if( (i%3)==0 ){
      printf("%d eh multiplo de 3\n", i);
    }
    if( (i%5)==0 ){
      printf("%d eh multiplo de 5\n", i);
    }
  }
  */

  // gera os numeros para serem testados
  // cada numero eh armazenado na variavel i
  // cada passada no loop incrementa o valor de i
  // o loop termina quando i maior que 100

  soma = 0;

  for(i=3; i<=100; i++){
    // inicialmente, assume-se que o numero
    // EH primo
    // variahveis "flag"
    testaprimo = 0;
    for(j=2; j<i && testaprimo == 0; j++){
      if(i%j == 0){
        // caso nao seja (divisao por zero com
        // resto nao nulo), a variavel testaprimo
        // assume valor igual a 1
        testaprimo = 1;
      }
    }
    // terminado o loop de testes, imprime
    // se o numero e primo ou nao
    if(testaprimo == 0){
     // printf("%d eh primo\n", i);
      soma = soma+i;
    }
    else{
     // printf("%d nao eh primo\n", i);
    }
  }
  printf("soma dos primos menores"
         "ou iguais a %d eh %d\n", i, soma);
  return 0;
}


