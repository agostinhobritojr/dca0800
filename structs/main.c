#include <stdio.h>
#include <string.h>

struct aluno{
  int idade;
  char nome[100];
  int matricula;
};

struct matriz{
  int nlinhas;
  int ncolunas;
  float x[50][50];
};

struct matriz A, B, C;

void imprime(struct matriz m){
  int i, j;
  for(i=0; i<m.nlinhas; i++){
    for(j=0; j<m.ncolunas; j++){
      printf("%f,", m.x[i][j]);
    }
    printf("\n");
  }
}

void soma(){
  if(A.nlinhas == B.nlinhas &&
     A.ncolunas == B.ncolunas){
    C.ncolunas = A.ncolunas;
    C.nlinhas = A.nlinhas;
    // executa os loops...
  }
}


int main(){

  printf("Digite a qde.  linhas A: ");
  scanf("%d", &A.nlinhas);
  printf("Digite a qde. colunas A: ");
  scanf("%d", &A.ncolunas);
  printf("digite o elemento (0,0) da A: ");
  scanf("%f", &A.x[0][0]);

  imprime(A);


/*  struct aluno jose, maria;
  jose.idade = 20;
  strcpy(jose.nome, "Jose Maria");
  jose.matricula = 20183434;

  printf("jose-----\n");
  printf("idade = %d\n", jose.idade);
  printf("nome = %s\n", jose.nome);
  printf("matricula = %d\n",
         jose.matricula);
*/

  return 0;
}



