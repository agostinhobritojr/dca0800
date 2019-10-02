#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  float x[5][5];
  char formato[40];
  int i, j;
  for (i=0; i<5; i++) {
    for (j=0; j<5; j++) {
      x[i][j] = (rand()%1000)/
          10.0;
    }
  }
  strcpy(formato,"%7.4f ");
  for (i=0; i<5; i++) {
    for (j=0; j<5; j++) {
      printf(formato, x[i][j]);
    }
    printf("\n");
  }
  return 0;
}
