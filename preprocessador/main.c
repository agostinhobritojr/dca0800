// # instrucao de pre-processador
#include <stdio.h>
#include <math.h>

// use define para criar constantes
// e pequenas funcoes no seu codigo
// o define substitui a definicao
// pela sequencia que segue ateh
// o final da linha

#define PI 3.1415
#define QUAD(x) (x)*(x)

int main(){
  float x, y;
  x = sin(90*PI/180.0);
  x = cos(90*PI/180.0);
  x = tan(90*PI/180.0);

  x = 4;
  y = QUAD(8-4);
  printf("%e^2 = %e\n", x, y);

  return 0;
}
