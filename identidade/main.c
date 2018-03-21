#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j, n;
  int liminf, limsup;
  int aleatorio;
  // comentario
  printf("digite o valor de n: ");
  scanf("%d", &n);
  printf("digite limite inferior: ");
  scanf("%d", &liminf);
  printf("digite limite superior: ");
  scanf("%d", &limsup);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      aleatorio = rand()%(limsup-liminf+1)+
          liminf;
      printf("%2d ", aleatorio);
    }
    printf("\n");
  }

  /*
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(i == j){
        printf("1 ");
      }
      else{
        printf("0 ");
      }
    }
    printf("\n");
  }
*/
  return 0;
}
