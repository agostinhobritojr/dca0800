#include <stdio.h>

int primo(int old){
  int ehprimo, divisor;
  do{
    ehprimo = 1;
    old++;
    for(divisor = 2; ehprimo!=0 && divisor<old-1;
        divisor++){
      if(old % divisor == 0){
        ehprimo = 0;
      }
    }
  }while(ehprimo != 1);
  return old;
}

int main(void){
  int x, y;
  x = 2;
  x = primo(x);
  printf("seguinte = %d\n", x);
  x = primo(x);
  printf("seguinte = %d\n", x);
  x = primo(x);
  printf("seguinte = %d\n", x);
  x = primo(x);
  printf("seguinte = %d\n", x);
  x = primo(x);
  printf("seguinte = %d\n", x);
  x = primo(x);
  printf("seguinte = %d\n", x);

  return 0;
}

