#include <stdio.h>

int main() {
  int lista[] = {1, 2, 3, 4, 5};
  int tamanho = sizeof(lista) / sizeof(lista[0]);

  for (int i = 0; i < tamanho; i++) printf("%d ", lista[i]);
  printf("\n");

  for (int i = 0; i < tamanho / 2; i++) {
      int tmp = lista[i];
      lista[i] = lista[tamanho - 1 - i];
      lista[tamanho - 1 - i] = tmp;
  }

  for (int i = 0; i < tamanho; i++) printf("%d ", lista[i]);
  printf("\n");

  return 0;
}