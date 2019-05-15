#include <stdio.h>

int main(){
  int a, b, c;
  for(a=1; a<998; a++){
    for(b=1; b<998; b++){
      for(c=1; c<998; c++){
        if(a+b+c==1000 &&
           a*a + b*b == c*c &&
           a < b && b < c){
          printf("%d, %d, %d\n",
                 a, b, c);
          printf("prod = %d\n", a*b*c);
        }
      }
    }
  }

  return 0;
}
