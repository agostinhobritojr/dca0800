#include <stdio.h>

int main(){
  int i, num;

  printf("Digite o numero: ");
  scanf("%d", &num);

  for (i=1; i<=10; i=i+1){
    printf("%d x %2d = %2d\n", num,
           i, num*i);
  }
  return 0;
}
