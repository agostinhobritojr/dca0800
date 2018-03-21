#include <stdio.h>

int main()
{
  int i, j, n;
  float soma, x;
  // inicializacao da variavel soma
  soma=0.0;
  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);
  for( i=0 ; i<n ; i=i+1){
    printf("Digite o numero %d: ", i+1);
    scanf("%f", &x);
    soma = soma + x;
  }
  printf("soma = %f\n", soma);
  printf("media = %f\n", soma/n);

  for( i=0; i<3; i++){
    for(j=3; j>0; j--){
      printf("%d %d", i, j);
    }
    printf("\n");
  }


  return 0;
}
