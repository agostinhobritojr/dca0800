#include <stdio.h>
#include <string.h>

struct aluno{
  char nome[40];
  int idade;
  int matricula;
};

struct teste{
  char c1;
  char c3;
  int c2;
};

int main(void){
  struct aluno jose;
  struct aluno alunos[50];
  int i, nalunos;

  printf("digite o numero de alunos: ");
  scanf("%d", &nalunos);
  for(i=0; i<nalunos; i++){
//    getchar();
    printf("digite o nome do aluno %d: ", i+1);

    do{
      fgets(alunos[i].nome, 50, stdin);
    }while(alunos[i].nome[0]=='\n');

    printf("digite a idade do aluno %d: ", i+1);
    scanf("%d", &(alunos[i].idade));
    printf("digite a matricula do aluno %d: ", i+1);
    scanf("%d", &(alunos[i].matricula));
  }

  for(i=0; i<nalunos; i++){
    printf("idade do aluno %d = %d\n", i+1, alunos[i].idade);
  }


  jose.idade = 20;
  jose.matricula = 235423;
  strcpy(jose.nome, "Jose Maria");

  printf("idade = %d\n", jose.idade);
  printf("matri = %d\n", jose.matricula);
  printf("nome  = %s\n", jose.nome);

  printf("tamanho de aluno = %d\n",
         sizeof(struct aluno));

  printf("tamanho de teste = %d\n",
         sizeof(struct teste));

  return 0;
}

