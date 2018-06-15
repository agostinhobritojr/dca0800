#include <stdio.h>

int main(void){
  int c;
  int contaletra[26];
  int maior;
  int i, j;
  puts ("digite o texto colocando um ('#') para sair:\n ");
  for(int i=0; i<26; i++){
	contaletra[i] = 0;
  }
  do{
    c=getchar();
	if(c >= 'A' && c <= 'Z'){
	  contaletra[c-'A']++;
	}
	else if(c >= 'a' && c <= 'z'){
	  contaletra[c-'a']++;
	}
	//    putchar (c);
  } while (c != '#');
  maior=0;
  for(i=0; i<26; i++){
	if(contaletra[i] > maior){
	  maior = contaletra[i];
	}
  }
  for(i=0; i<26; i++){
	contaletra[i] = 60 * contaletra[i]/maior;
	for(j=0; j < contaletra[i]; j++){
	  printf("*");
	}
	printf("\n");
  }
  return 0;
}
