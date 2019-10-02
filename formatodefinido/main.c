#include <stdio.h>

int main(){
  int n;
  float x;
  char format[40], digits[4];
  printf("Digite o numero: ");
  scanf("%f", &x);
  printf("Digite a precisao: ");
  scanf("%d", &n);

  sprintf(digits,"%d", n);
  printf("digits = %s\n", digits);
  strcpy(format,"Numero: %.");
  strcat(format, digits);
  strcat(format,"f\n");
  puts(format);
  printf(format, x);
  return 0;
}





