#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehprimo(int x){

}

int main(){
  int idades[10], reverso[10];
  int idades2[10];
  int media, nalunos;
  int i;
  nalunos = 10;


  // NUNCA!!!!!
  // scanf("%d", &nalunos);
  //int alo[nalunos];

  srand(time(0));

  for(i=0; i<nalunos; i++){
    idades[i] = 18+rand()%11;
    printf("%d, ", idades[i]);
  }
  printf("\n");

  // NUNCA!!!!!
  // idades2 = idades;

  for(i=0; i<nalunos; i++){
    reverso[i] =
        idades[nalunos-1-i];
  }
  for(i=0; i<nalunos; i++){
    printf("%d, ", reverso[i]);
  }
  printf("\n");


  media = 0;
  for(i=0; i<nalunos; i++){
    media = media+idades[i];
  }

  media = media/nalunos;

  printf("a media eh %d\n",
         media);

  return 0;
}
