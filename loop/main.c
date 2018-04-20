#include <stdio.h>

void a(void){
  b();
}

void b(void){
  a();
}
int main()
{
  a();
  return 0;
}
