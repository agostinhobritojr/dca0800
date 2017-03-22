#include <stdio.h>

int main(void)
{
  int x, z;
  unsigned char c;
  float y;
  x = 3;
  z = 2;

  x = 350;
  c = (unsigned char) x;

  printf("c = %d\n", c);

//  y = (float)(x/z);
  y = (float)x/z;
  y = 1.0*x/z;
//  y = (float)x/(float)z;
  printf("y = %f\n", y);
  x = (int) y;
  printf("x = %d\n", x);

  return 0;
}

