#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
  char s1[15], s2[15];
  char alo;
  int i, valor;

  printf("digite o texto: ");
  fgets(s2, 15, stdin);
  puts(s2);

  // convert de "ASCII" to INT
  // ver atoi(), atof()
  valor = atoi(s2);
  printf("valor = %d\n", valor);

  // imprime qualquer literal dentro
  // de um array de chars
  sprintf(s1,"%d", valor);
  printf("valor convertido = ");
  puts(s1);

  /*
  // copia um literal para s1
  strcpy(s1, "alo, brasil!");

  // puts envia um string para o terminal
  puts(s1);

  printf("digite o texto: ");

  // le um literal da entrada padrao (teclado)
  //gets(s2);
  // stdin (standard input) eh a entrada
  // padrao do programa, ou teclado.
  fgets(s2, 15, stdin);
  puts(s2);

  printf("tamanho = %d\n", strlen(s2));

  s2[strlen(s2)-1]=0;
  printf("tamanho = %d\n", strlen(s2));

  printf("saida = %d\n", strcmp(s2,"alo"));

  if(strcmp(s2,"alo")==0){
    printf("usuario digitou alo\n");
  }

  for(i=0; i<strlen(s2); i++){
    s1[strlen(s2)-1-i] = s2[i];
  }
  s1[strlen(s2)] = 0;
  puts(s1);

  printf("digite o caractere: ");
  alo = getchar();


  printf("char = %c\n", alo);
*/
  return 0;
}

