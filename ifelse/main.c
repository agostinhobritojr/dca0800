#include <stdio.h>

int z; // variaveis globais

int main(void){
    int x, y; // variaveis locais
    printf("digite x: ");
    scanf("%i", &x);
    //  printf("valor = %d\n", x!=5);
    y = x!=5; // guarda o valor da expressao
    printf("valor = %d\n", y);

    z = 4;
    printf("z = %d\n", z);

    // verifica se 4 < x < 8
    if( (x>4) && (x<8) ){
        printf("dentro do primeiro intervalo\n");
        printf("continue imprimindo dentro do if");
    }
    else{
        printf("fora do intervalo\n");
    }

    if( (x<=4) || (x>=8) ){
        printf("dentro do segundo intervalo\n");
    }
    return 0;
}

