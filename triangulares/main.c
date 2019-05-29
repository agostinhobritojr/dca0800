#include <stdio.h>

int main()
{
  int num, i, j;
  int ndivisores;
  num = 1;
  for(i=2; ndivisores<500; i++){
    ndivisores = 0;
    for(j=1; j<=num; j++){
      if(num % j == 0){
        ndivisores++;
      }
    }
   // if(ndivisores > 500){

   // }
   // printf("numero %d tem %d divisores\n",
     //      num, ndivisores);
    num = num + i;
  }
  printf("o maior numero eh %d", num-i);

  return 0;
}
