#include <stdio.h>

int main(){
  int x, div;
  for (x=1; ;x++) {
    for (div = 2; div<=20; div++) {
      if(x%div != 0){

      }
    }
    printf("%d\n", x);
  }
  return 0;
}
