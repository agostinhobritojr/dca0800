#include <stdio.h>

union alo{
  char bits[4];
  int x;
  int y;
  float z;
};

int main(void)
{
  union alo teste;
  teste.x = 256;
  printf("teste.x = %d\n", teste.x);
  printf("teste.y = %d\n", teste.y);
  printf("teste.z = %f\n", teste.z);
  printf("teste.bits[0] = %d\n", teste.bits[0]);
  printf("teste.bits[1] = %d\n", teste.bits[1]);
  printf("teste.bits[2] = %d\n", teste.bits[2]);
  printf("teste.bits[3] = %d\n", teste.bits[3]);


  teste.y = 3;
  printf("teste.x = %d\n", teste.x);
  printf("teste.y = %d\n", teste.y);
  printf("teste.z = %f\n", teste.z);
  teste.z = 3.6;
  printf("teste.x = %d\n", teste.x);
  printf("teste.y = %d\n", teste.y);
  printf("teste.z = %f\n", teste.z);
  return 0;
}

