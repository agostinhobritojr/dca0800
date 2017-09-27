#include <stdio.h>

int main(void){
  int x[5] = {4,5,6,1,8};
  int i, j;
  int grafico[5][50];
  int maximo;

  // descobrir qual o maior valor da matriz
  maximo = 0;
  for(i=0; i<5; i++){
	if(x[i] > maximo){
	  maximo = x[i];
	}
  }
  // inicialmente, limpa-se toda a matriz
  for(i=0; i<5; i++){
	for(j=0; j<maximo; j++){
	  grafico[i][j]=0;
	}
  }
  // preenche a matriz com '1s' nos locais
  // onde o grafico ira surgir
  for(i=0; i<5; i++){
	for(j=0; j<x[i]; j++){
	  grafico[i][j] = 1;
	}
  }
  for(i=0; i<5; i++){
	for(j=0; j<maximo; j++){
	  printf("%d", grafico[i][j]);
	}
	printf("\n");
  }

  // percorre da ultima coluna ate a primeira
  for(j=maximo-1; j>-1; j--){
	for(i=0; i<5; i++){
	  if(grafico[i][j] == 1){
		printf("*");
	  }
	  else{
		printf(" ");
	  }
	}
	printf("\n");
  }
}
