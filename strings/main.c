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

int main(){
  char nome[50], nomerev[50];
  int i, tam;
//  scanf("%s", nome);
 //  gets(nome);

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
