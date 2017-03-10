#include <stdio.h>
#include <math.h>

// DIRETIVAS DE COMPILACAO
// a diretiva #define serve para associar
// um simbolo com uma expressao
#define PI 3.1415
#define QUADRADO(x) (x)*(x)
// Costumeiramente, use os simbolos das
// definicoes com caracteres MAIUSCULOS

int main(void){
  float teta, radianos;
  printf("digite um numero: ");
  scanf("%f", &teta);
  // numeros magicos
  radianos = teta*PI/180;
  printf("o seno de teta é: %6.2f\n", sin(radianos));


  printf("digite um numero: ");
  scanf("%f", &teta);
  // numeros magicos
  radianos = QUADRADO(teta);
  printf("o quadrado de teta é: %f\n", radianos);

  radianos = QUADRADO(8-4);
  printf("radianos = %f\n", radianos);
  return 0;
}



