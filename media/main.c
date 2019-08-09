#include <stdio.h>

/* comentario em c
        alo
     afsdf asdf asdfasdf
 */
int main(){
  // tipo float serve para armazenar
  // numeros reais
  float u1, u2, u3;
  float media;

  printf("Programa para calculo da media\n");
  printf("Digite a nota da u1: ");
  // %f serve para ler/escrever numeros float
  scanf("%f", &u1);
  printf("Digite a nota da u2: ");
  scanf("%f", &u2);
  printf("Digite a nota da u3: ");
  scanf("%f", &u3);
  media = (u1+u2+u3)/3;
  printf("(%5.2f+%5.2f+%5.2f)/3=%4.2f\n",
         u1,u2,u3,media);

  if( media >= 5.0 ){
    printf("O aluno foi aprovado\n");
  }
  else{
    printf("O aluno nao foi aprovado\n");
  }



  return 0;
}





