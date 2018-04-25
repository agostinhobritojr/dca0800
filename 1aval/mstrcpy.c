#include <stdio.h>

void mystrcpy(char *destino, char *origem){
  while(*origem != 0){
	*destino = *origem;
	destino++;
	origem++;
  }
  *destino='\0';
}

char* mystrcat(char *destino, char *origem){
  char * ret;
  ret = destino;
  while(*destino != 0)
	destino++;
  while(*origem != 0){
	*destino = *origem;
	destino++;
	origem++;
  }
  *destino='\0';
  return (ret);
}
int main(void){
  char str[100];
  mystrcpy(str,"O rato roueu a roupa do rei de roma");
  mystrcat(str,"mas a rainha fugiu");
  puts(str);
}
