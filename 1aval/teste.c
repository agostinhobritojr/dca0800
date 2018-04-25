#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;

    num = 1;
    for(i=1;i <=20;) {

       if( num%i == 0) {
        i= i+1;
       }
       else {
           num=num+1;
       }
    }
       printf("O menor numero positivo que pode ser divisivel pelos numeros de 1 a 20 sem deixar resto eh: %d \n", num);



    return 0;
}

