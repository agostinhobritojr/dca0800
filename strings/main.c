#include <stdio.h>
#include <string.h>

int main(){
  char nome[40];

  int i, achei;
  nome[0] = 'A';
  nome[1] = 'l';
  nome[2] = 'o';
  nome[3] = 'h';
  nome[4] = 'a'; //97
  nome[5] = 0;
  puts(nome);

  puts("Digite seu nome: ");
  fgets(nome, 40, stdin);
  achei = 0;
  i = 0;
  do{
    if(nome[i] == 0){
      achei = 1;
    }else{
      printf("%c : %d\n", nome[i], nome[i]);
    }
    i++;
  }while (achei != 1);
  printf("Encontrei %d caracteres\n", i-2);

  printf("o Nome tem %d caracs\n", strlen(nome));











  puts(nome);

  return 0;
}
