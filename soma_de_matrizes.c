#include <stdio.h>

int main() {
  int matrizA[2][3] = {
    {4, 2, 1},
    {9, 7, 6}
  };

  int matrizB[2][3] = {
    {1, 1, 1},
    {4, 4, 4}
  };

  int matrizC[2][3];

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; 
      printf("%d ", matrizC[i][j]);
    }
    printf("\n");
  }
}