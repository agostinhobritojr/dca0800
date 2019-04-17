#include <stdio.h>
#include <stdlib.h>

int soma(int n, int prevsoma){
  int tot;
  int valor;
  valor = rand()%10;
  if(n == 0){
    return prevsoma;
  }
  else{
  tot = soma(n-1,
             prevsoma+
             valor);
  return tot;
  }
}


// x = fatorial(5);
int fatorial(int a){
  if(a == 1){
    return 1;
  }
  else{
    // recursividade
    return a*fatorial(a-1);
  }

  /*int i, ret;
  ret = 1;
  for(i=1; i<=a; i++){
    ret = ret*i;
  }
  return ret;*/
}

int main()
{
  printf("Fatorial de %d"
         " = %d\n", 5,
         fatorial(5));

  printf("soma = %d\n",
         soma(100,0));
  return 0;
}
