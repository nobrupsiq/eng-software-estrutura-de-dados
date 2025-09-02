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

  int matrizC[2][3] = 0;

  for(int linha = 0; linha < 2; linha++) {
    for(int coluna = 0; coluna < 3; coluna++) {
      matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna]; 
      printf("%d ", matrizC[linha][coluna]);
    }
    printf("\n");
  }
}