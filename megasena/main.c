#include <stdio.h>
#include <stdlib.h> // para rand()
#include <time.h> // para srand()

int main(){
  // char: [-128,127]
  char aposta[6], napostas;
  int i, j, k, repetiu, tmp;

  printf("Digite quantas apostas gerar: ");
  scanf("%d", &napostas);

  srand(time(0)); // cria uma semente para o rng

  // INICIO DA REPETICAO DA GERACAO DE APOSTAS
  for (k=0; k<napostas; k++) {
    // gera um no. aleatorio na faixa [1,60]
    aposta[0]=1+rand()%60;
    for (i=1; i<6; i++) {
      // gera o numero e so desiste...
      do{
        aposta[i]=1+rand()%60;
        // verifica se para uma das apostas
        // anteriores houve alguma coincidencia
        repetiu = 0;
        for (j=0; j<i; j++) {
          if(aposta[i] == aposta[j]){
            repetiu = 1;
          }
        }
        // ... quando o numero nao se repete
      }while (repetiu == 1);
    }
    // ordena a aposta
    for (i=0; i<5; i++) {
      for (j=i+1; j<6; j++) {
        if(aposta[i] > aposta[j]){
          tmp = aposta[i];
          aposta[i] = aposta[j];
          aposta[j] = tmp;
        }
      }
    }

    for (i=0; i<6; i++) {
      printf("%d, ", aposta[i]);
    }
    printf("\n");

  }
  // FIM DA REPETICAO DA GERACAO DE APOSTAS
  return 0;
}
