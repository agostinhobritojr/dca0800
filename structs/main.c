#include <stdio.h>
#include <string.h>

// struct NOME_DA_ESTRUTURA{
//    campos
// }

typedef struct Pessoas{
  char nome[50];
  int cpf;
} Pessoa;

struct Aluno{
  Pessoa p;
  int matricula;
};

typedef int aloha;

int main(void){
  struct Aluno jose;
  struct Aluno maria;
  struct Aluno alunos[50];

  Pessoa antonio;

  printf("antonio ocupa %d bytes\n",sizeof(jose));

  char teste[100];

  aloha x;
  x = 4;

//  strcpy(jose.nome, teste);
//  fgets(jose.nome,50,stdin);
  strncpy(jose.p.nome,"Jose", 50);

  strncpy(jose.p.nome,"Jose",50);
  jose.matricula = 1234;

  strncpy(maria.p.nome,"Maria",50);
  jose.matricula = 5678;

  strncpy(alunos[0].p.nome,"Maria",50);
  jose.matricula = 5678;
  return 0;
}




