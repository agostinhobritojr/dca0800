#include <stdio.h>
#include <string.h>

int tamliteral(char a[]){
  int tam=0;
  int pos=0;
  while(a[pos] != 0){
    tam++; pos++;
  }
  return tam;
}

void reverso(char origem[], char destino[]){
  int tam, i;
  tam = tamliteral(origem);
  for(i=0; i<tam; i++){
    destino[i] = origem[tam-1-i];
  }
  destino[tam] = 0;
}

// funcionamento
// char nome[40] = "Jose"
// char sobrenome[40] = "Maria"
// concatena(nome, sobrenome);
// puts(nome)
// saida: JoseMaria
// |J|o|s|e|M|a|r|i|a| |
//  0 1 2 3 4 5 6 7 8 9
void concatena(char destino[],
               char origem[]){
  int tamDestino;
  int tamOrigem, i, j;
  // strlen calcula o tamanho
  // do literal
  tamDestino = strlen(destino);
  tamOrigem = strlen(origem);
  for(i=tamDestino, j=0;
      i<tamDestino+tamOrigem,
      j < tamOrigem; i++, j++){
    destino[i]=origem[j];
  }
  // insere o zero que marca o fim
  // do literal
  destino[tamOrigem+tamDestino] = 0;
}

int main(){
  char nome[50], nomerev[50];
  char sobrenome[40];
  int i, tam;
//  scanf("%s", nome);
 //  gets(nome);

  // strcpy copia para nome
  // o literal jose
  strcpy(nome, "Jose");
  strcpy(sobrenome, "Maria");

 // concatena(nome,sobrenome);
  strcat(nome, sobrenome);
  puts(nome);
/*
  fgets(nome,50,stdin);

  printf("nome = %s\n", nome);

  tam = tamliteral(nome);

  printf("nome tem %d "
         "caracteres\n", tam);

  reverso(nome, nomerev);
  printf("nomerev = %s\n", nomerev);

 // nome[4]=90;


//  nome[6]=0;
//  printf("nome = %s\n", nome);
/*  for(i=0; i<15; i++){
    printf("%d\n", nome[i]);
  }*/
  return 0;
}
