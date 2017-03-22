#include <stdio.h>

int main(void)
{
  float a, b, c;
  float tmp;
  // coloca a maior dos valores na variavel a
  // realizando PERMUTACOES
  printf("digite a, b e c: ");
  scanf("%f %f %f", &a, &b, &c);
  if(b > a){ // 3 4 5
    tmp = a;
    a = b;
    b = tmp;
  }
  if(c > a){ // 4 3 5
    tmp = a;
    a = c;
    c = tmp;
  }
  // 5 3 4
  // testa se a*a eh igual a b*b + c*c
  tmp = a*a - (b*b+c*c);
  if(a*a == (b*b+c*c)){
//  if(tmp == 0){
    printf("o triangulo eh retangulo\n");
  }
  else{
    printf("o triangulo nao eh retangulo\n");
  }
  return 0;
}

