#include <stdio.h>

int main()
{
  int a, b, c;
  printf("digite a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);
//  scanf("%d", &b);
//  scanf("%d", &c);
  if((a>b) && (a>c)){
    printf("maior eh %d\n", a);
  }
  else if ((b>a) && (b>c)){
    printf("maior eh %d\n", b);
  }
  else{
    printf("maior eh %d\n", c);
  }
  return 0;
}
