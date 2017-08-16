#include <stdio.h>

int main(void){
  int i, j;
  int n;

  int fn, fn1, fn2;

  fn1 = 1;
  fn2 = 1;
  printf("1 1 ");
  for(i=1; i<29; i++){
    fn = fn1 + fn2;
    printf("%d ", fn);
    fn2 = fn1;
    fn1 = fn;
  }
  printf("\n");
  //


  // imprime na tela i -> [1,10]
  for(i=1; i<10; i=i+1){
    for(j=1; j<=i; j++){
      printf("%d", i);
    }
    printf("\n");
  }
  for(i=8; i>=1; i--){
    for(j=1; j<=i; j++){
      printf("%d", i);
    }
    printf("\n");
  }

  printf("\n");
  printf("\n");
  for(i=10; i>0; i=i-1){
    printf("%2d, ", i);
  }
  printf("\n");
  printf("\n");
  n=30;
  for(i=1; i<=n; i++){
    printf("%d,", i%3);
  }
  printf("\n");

  printf("continua\n");
  return 0;
}

