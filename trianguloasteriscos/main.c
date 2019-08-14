#include <stdio.h>

int main()
{
  int i, j;
  int n;
  printf("Digite o tamanho do triangulo: ");
  scanf("%d", &n);
  // laco externo que conta as linhas
  for (i=1; i<=n; i=i+1) {
    // laco interno para desenhar as linhas
    for (j=1; j<=i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
  // laco externo que conta as linhas
  for (i=n-1; i>=1; i=i-1) {
    // laco interno para desenhar as linhas
    for (j=1; j<=i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}
