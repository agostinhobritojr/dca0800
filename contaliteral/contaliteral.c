#include <stdio.h>

int main(void){
  int c;
  int contaletra[26];
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
  for(int i=0; i<26; i++){
	printf("letra %c = %d\n", 'A'+i, contaletra[i]);
  }
  return 0;
}
