#include <stdio.h>
#include <stdlib.h>

int maisum(int x){
  int retorno;
  retorno = x + 1;
  return retorno;
}

int maisn(int x, int n){
  int retorno;
  retorno = x + n;
  return retorno;
}

int fat(int x){
  int ret, i;
  if(x < 0){
    exit(0);
  }
  if(x == 0 || x == 1){
    return 1;
  }
  ret = 1;
  for(i = x; i>0; i--){
    ret = ret * i;
  }
  return ret;
}


int fatrecursivo(int x){
  int ret, i;
  if(x < 0){
    exit(0);
  }
  if(x == 0 || x == 1){
    return 1;
  }
  ret = x*fatrecursivo(x-1);
  return ret;
}

void menu(void){
  printf("escolha sua opcao: \n");
  printf("1 - fatorial normal\n");
  printf("2 - fatorial recursivo\n");

}

int main(){
  int alo, ola, fatorial;
  menu();
  printf("digite o valor:" );
  scanf("%d", &alo);
  ola = maisum(alo);
  fatorial = fat(alo);
  printf("o fatorial eh %d\n", fatorial);
  printf("O seguinte eh %d\n", ola);
  ola = maisn(alo, 10);
  printf("O seguinte eh %d\n", ola);
  return 0;
}
