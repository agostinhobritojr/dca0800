#include <stdio.h>

int main(){
  int x, i, j, resto, primo;
  printf("Digite o numero: ");
  scanf("%d", &x);

  // gera os numeros para serem divididos
  for (i=1; i<=x; i++) {
    // verifica se o divisor eh primo
    // parte do principio que eh...
    primo = 1;
    // so continua se o limite
    // superior nao tiver sido atingido
    // e o numero ainda for considerado
    // primo
    for (j=2; j<i && primo==1; j++) {
      // se o divisor nao eh primo
      if(i%j==0){
        // marque isso na variavel primo
        // fazendo-a igual a zero
        primo = 0;
      }
    }
    // se o numero i passou no teste da
    // primalidade, entao realize o teste
    // para saber se i eh divisor de x
    if(primo == 1){
      resto = x%i;
      // caso seja divisor, o resto eh
      // zero
      if(resto == 0){
        printf("%d, ", i);
      }
    }
  }
  printf("\n");
  return 0;
}
