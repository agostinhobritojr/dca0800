#include <stdio.h>

int main(){
  int a, b, c, x;
  int achei=0;
  int cont=0;
  for (a=1; a<=997 && achei==0; a++) {
    for (b=a+1; b<=997 && achei==0; b++) {
      for (c=b+1; c<=997 && achei==0; c++) {
        cont++;
        if(a<b && b<c){
          if((a+b+c) == 1000){
            x = a*a+b*b-c*c;
            if(x == 0){
              printf("%d, %d, %d\n", a,b,c);
              achei = 1;
            }
          }
        }
      }
    }
  }
  printf("Cont = %d\n", cont);
  return 0;
}
