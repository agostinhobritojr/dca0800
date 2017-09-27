#include <stdio.h>
// 14. Gerar 20 números entre 1000 a 1999 que divididos por 11 dão um
// resto igual a 5.

int main(void){
  int x;
  int n, i;
  n = 0;
  for(i=1000; i<1999, n<20; i++){
	if(i%11 == 5){
	  printf("%d = %d\n", n+1, i);
	  n++;
	}
  }
}
