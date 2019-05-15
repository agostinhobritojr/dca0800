#include <stdio.h>
#include <string.h>

int main(){
  char nome[40];
  int tam, i;
  int carac;
  int palavras;
  fgets(nome,40,stdin);
  puts(nome);

  tam = strlen(nome);
  // a funcao fgets le tambem a
  // quebra de linha que deve ser
  // removida
  nome[tam-1] = 0;
  tam = strlen(nome);
  carac = 0;
  for(i=0; i<tam; i++){
    if(nome[i] != ' '){
      carac++;
    }
  }
  printf("o nome tem %d caracteres\n",
         carac);
  palavras = 1;

  for(i=0; i<tam; i++){
    if(nome[i] == ' ' &&
       nome[i-1] != ' '){
      palavras++;
    }
  }
  printf("palavras = %d\n", palavras);

  return 0;
}
