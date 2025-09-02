#include <stdio.h>

int main(void) {
  int matrizA[2][3] = {
    {4, 2, 1},
    {9, 7, 6}
  };
  int matrizB[3][2] = {
    {1, 1},
    {4, 4},
    {2, 2}
  };

  // (Matriz 2x2) Porque tem apenas 2 linhas na minha matrizA e 2 colunas na matrizB
  int matrizC[2][2] = {0};

  for(int linha = 0; linha < 2; linha++) {
    for(int coluna = 0; coluna < 2; coluna++) {
      for(int att = 0; att < 3; att++) {
        matrizC[linha][coluna] += matrizA[linha][att] * matrizB[att][coluna];
      }
    }
  }

  // (i < 2) na matriz A eu só tenho duas linhas
  // (j < 2) na matriz B eu só tenho duas colunas 
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("%d ", matrizC[i][j]);
    }
    printf("\n");
  }

  return 0;
}