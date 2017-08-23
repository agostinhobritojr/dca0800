#include <stdio.h>

int main(void){
  int x, y, z;

  x = 1;
  y = z = 1;
  while( (y != 0) || (z != 0) ){
    y = x % 13;
    z = x % 17;
    printf("x= %3d; y= %2d; z= %2d\n", x, y, z);
    x++;
  }

  /*
  x = 0;
  while (x != 6){
    printf("x = %d\n", x);
    x++;
  }
  printf("\n");

  x = 0;
  do{
    printf("x = %d\n", x);
    x++;
  }while(x != 6);
*/
  return 0;
}

