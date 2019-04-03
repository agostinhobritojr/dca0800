#include <stdio.h>

int main(){
  float nivel;
  nivel = 1.0;

  while(nivel < 2){
    nivel = nivel + 0.1;
    printf("nivel = %f\n",
           nivel);
  }

  do{
    nivel = nivel - 0.1;
    printf("nivel = %f\n",
           nivel);

  }while(nivel > 1);


  printf("terminou\n");

  return 0;
}
