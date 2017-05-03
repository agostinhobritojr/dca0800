#include <stdio.h>

int main(void){
  int A[8][6] = {0,1,0,0,1,0,
                 0,0,0,1,1,1,
                 0,1,0,0,1,0,
                 1,1,1,0,0,0,
                 0,1,0,1,0,0,
                 0,0,1,1,1,0,
                 0,1,0,1,0,0,
                 0,0,0,1,0,0};

  int B[3][3] = {0,1,0,1,1,1,0,1,0};
  int C[8][6];

  int nla, nca, nlb, ncb, nlc, ncc;
  int i, j, k, l;
  int casou;
  nla = 8; nca = 6;
  nlb = 3; ncb = 3;
  nlc = 8; ncc = 6;

  // preenchendo a matriz C de modo
  // a marcar todos as posicoes como não
  // existentes de casamento
  for(i=0; i<nlc; i++){
    for(j=0; j<ncc; j++){
      C[i][j] = 0;
    }
  }

  // faz a varredura na matriz a
  for(i=0; i<nla-2; i++){
    for(j=0; j<nca-2; j++){
      // testa a submatriz
      // assume inicialmente que ha casamento
      // completo
      casou = 1;
      for(k=0; k<3 && casou==1; k++){
        for(l=0; l<3 && casou==1; l++){
          if(A[i+k][j+l] != B[k][l]){
            casou = 0;
          }
        }
      }
      if(casou == 1){
        C[i+1][j+1] = 1;
      }
    }
  }
  for(i=0; i<nlc; i++){
    for(j=0; j<ncc; j++){
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }

  return 0;
}











