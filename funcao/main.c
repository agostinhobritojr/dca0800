#include <stdio.h>
#include <math.h>

// VIA DE REGRA, VARIAVEIS
// GLOBAIS DEVEM SER EVITADAS
// variavel global
int jose;

int maisum(int a){
  // variavel local
  int retorno;
  retorno = a+1;
  printf("jose = %d\n", jose);
  jose = 33;
  printf("retorno= %d\n", retorno);
  return retorno;
}

int mudax(int x){
  x = 5;
}

int geranumero(void){
  return 5;
}

void mostranumero(int x){
  printf("numero = %d\n", x);
}

float media(float a, float b){
  float retorno;
  retorno = (a+b)/2;
  return retorno;
}

int main(){
  int x, y;
  float a=4, b=5;
  x = 3;
  jose = 45;

  printf("media = %f\n", media(a,b));

  printf("jose = %d\n", jose);
  y = maisum(x);
  printf("y = %d\n", y);
  printf("jose = %d\n", jose);

  mudax(x);
  printf("x = %d\n", x);

  return 0;
}



