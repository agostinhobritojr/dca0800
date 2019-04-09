#include <stdio.h>

int main(){
  int numero;
  int divisor, resto;
  int acheinumero=0;
  numero = 21;
  do{
    // assume que o numero eh divisivel
    // por todos na faixa [2,21]
    acheinumero = 1;
    numero = numero + 1;
    for(divisor=2;
        (divisor<=20&&
         acheinumero!=0);
        divisor++){
      resto = numero%divisor;
      // se o resto for diferente de zero
      // eh pq o numero nao atendia
      // a condicao
      if(resto != 0){
        // marca que o numero ainda
        // nao foi achado
        acheinumero = 0;
      }
    }
  } while(acheinumero == 0);
  printf("numero = %d\n", numero);
  return 0;
}
