#include <stdio.h>
#include <string.h>
struct aluno{
  char nome[400];
  int matricula;
  int cpf;
  char endereco[500];
  float coeficiente;
};

int main(){
  struct aluno alunos[100];
  struct aluno umaluno;

  printf("tamanho = %d\n",
         sizeof (umaluno));
  strcpy(umaluno.nome, "Jose Maria");
  umaluno.matricula = 1234;
  umaluno.coeficiente = 9.67;

  alunos[0].coeficiente = 8.76;

  printf("Matricula = %d",
         umaluno.matricula);
  return 0;
}


