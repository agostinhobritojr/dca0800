#include <stdio.h>

// prototipos das funcoes
int incrementa(int x);
void imprime();
int soma(int a, int b);

int main(void){
  int x = 5;
  int a;

  a = incrementa(x);

  printf("a = %d\n\n", a);
  x = soma(3,4);
  printf("soma = %d\n\n", soma(1,2));

  imprime();

  // o laco while repete as instrucoes
  // do bloco enquanto uma condicao eh
  // verdadeira
  while(x > 0){
    printf("%d\n", x);
    x--;
  }

  x = 0;
  // o laco do-while repete as intrucoes
  // do bloco enquanto uma condicao eh verdadeira
  // entretanto, a condicao soh eh testada no final
  do{
    printf("%d\n", x);
    x++;
  }while(x < 5);

}

// tipo nome_da_funcao(tipo1 variavel1)
int incrementa(int x){
  // corpo da funcao
  int y;
  y = x + 1;
  return(y);
  // a instrucao seguinte nao eh executada
  // pois a funcao finaliza antes
  y = 4;
  //  return(x+1);
}

// o tipo void serve para criar funcoes
// que, ou nao precisam de argumentos
// ou nao devolvem valores
void imprime(void){
  printf("jose\n");
//  printf("soma = %d\n", soma(3,4));
}

int soma(int a, int b){
  imprime();
  return(a+b);
}


