#include <stdio.h>
#include <stdlib.h>

int tamanho(char nome[]){
  int ret=0;
  for(int i=0; ; i++){
    if(nome[i] == 0){
      return ret;
    }
    ret++;
  }
}

void copiastrings(char copia[], char nome[]){
  int i=0;
  while(nome[i] != 0){
    copia[i] = nome[i];
    i++;
  }
  nome[i] = 0;
  return;
}

void concatenastrings(char destino[],
                      char origem[]){
  int i=0, j=0;
  while(destino[i]!=0){
    i++;
  }
  while(origem[j] !=0){
    destino[i+j] = origem[j];
    j++;
  }
  destino[i+j]=0;

}

int main(void){
  char x;
  char nome[20] = "jose";
  char sobrenome[20] = " maria";
  char copia[20];
  int i;


  concatenastrings(nome, sobrenome);
  printf("nomecompleto = %s\n\n", nome);

  printf("tamanho = %d\n\n", tamanho(nome));

  printf("reverso = ");
  for(i=0; i<tamanho(nome); i++){
    printf("%c", nome[tamanho(nome)-1-i]);
  }

  printf("\n");

  // copiar nome->copia
  //copiastrings(copia, nome);

  // strlen calcula o tamanho do literal
  i = strlen(nome);

  // copia nome->copia
  strcpy(copia,nome);

  x = 67;
  // o operador '' retorna o codigo
  // inteiro do caractere que vai no meio
  // 'A', 'z', '%', '\n'
  x = 'C';
  printf("x = %c; %d\n", x, x);
  printf("nome = %s\n", nome);

  for(i=0; i<20; i++){
    nome[i] = rand()%27+101;
  }

  for(i=0; i<20; i++){
  //  printf("nome[%d] = %c\n", i, nome[i]);
  }

  nome[10] = 0;
  printf("nome = %s", nome);

  return 0;
}

