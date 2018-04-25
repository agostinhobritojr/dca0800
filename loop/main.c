#include <stdio.h>

void a(void){
  printf("a-");
  b();
}

void b(void){
  printf("b-");
  a();
}
int main()
{
  a();
  return 0;
}
