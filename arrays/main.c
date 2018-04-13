#include <stdio.h>

int main(){
  // NAO EH PERMITIDO!!!!
  // int j;
  // int z[j];

  int x[10], z[10];
  int y, maior, menor;
  int i, j, troca;
  int n;
  n = 10;
  x[0] = 1;
  x[1] = -5;
  y = x[1];
  for(i=0; i<n; i++){
    x[i] = i+1;
  }
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  for(i=0; i<n; i++){
    z[i] = x[n-1-i];
  }
  for(i=0; i<20; i++){
    printf("%d, ", z[i]);
  }
  // 1. preencher x com valores aleatorios
  for(i=0; i<n; i++){
    x[i] = rand()%20; // [0,19]
  }
  printf("\n");
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  // 2. encontrar o maior elemento no array
  maior = x[0];
  for(i=1; i<n; i++){
    if(x[i] > maior){
      maior = x[i];
    }
  }
  printf("\nmaior = %d\n", maior);
  // 3. encontrar o menor elemento no array
  menor = x[0];
  for(i=1; i<n; i++){
    if(x[i] < menor){
      menor = x[i];
    }
  }
  printf("\nmenor = %d\n", menor);

  // ordenando os elementos
  // o loop externo seleciona o indice
  // do elemento que sera comparado com
  // os demais
  for(i=0; i<n-1; i++){
    // o loop interno varre o restante
    // do array
    for(j=i+1; j<n; j++){
      if(x[j] < x[i]){
        troca = x[i];
        x[i] = x[j];
        x[j] = troca;
      }
    }
  }

  printf("\n");
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }


  return 0;
}
