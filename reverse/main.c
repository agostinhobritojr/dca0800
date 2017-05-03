#include <stdio.h>
#include <string.h>
int main(void){
  char nome1[400];
  char nome2[400]="Lorem ipsum dolor sit amet,"
                  "consectetur adipiscing elit,"
                  "sed do"
                  " eiusmod tempor incididunt ut"
                  " labore et dolore magna aliqua."
                  " Ut enim ad minim veniam, "
                  "quis nostrud exercitation "
                  "ullamco laboris nisi ut aliquip "
                  "ex ea commodo consequat.";
  int contagem[127];
  int i;
  strcpy(nome1,"O rato roeu a roupa do rei de roma");

  // nome2 contem o reverso de nome1
  for(i=0; i<127; i++){
    contagem[i] = 0;
  }

  printf("---\n");
  for(i=0; i<strlen(nome2); i++){
    contagem[toupper(nome2[i])]++;
  }

  for(i='A'; i<='Z'; i++){
    printf("%c: %d\n", i, contagem[i]);
  }
  return 0;
}








