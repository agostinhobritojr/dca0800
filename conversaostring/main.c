#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int x;
  double y;
  char nome[100];
  strcpy(nome, "345");
  // convert de literal para inteiro
  x = atoi(nome);
  printf("x = %d\n", x);
  printf("nome[0] = %d\n", nome[0]);
  printf("nome[1] = %d\n", nome[1]);
  printf("nome[2] = %d\n", nome[2]);

  sprintf(nome, "%d", 123);
  puts(nome);

  strcpy(nome,"123..23");
  // convert de string para double
  // #include <stdlib.h>
  y = atof(nome);
  printf("y = %f\n", y);

  return 0;
}
