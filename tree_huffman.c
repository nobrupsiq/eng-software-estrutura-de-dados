#include <stdio.h>
#include <string.h>

typedef struct {
  char letra;
  int freq;
  char codigo[10];
} HuffmanCode;

int main() {
  HuffmanCode tabela[5] = {
    {'A', 3, "0"},
    {'B', 1, "100"},
    {'C', 1, "101"},
    {'T', 1, "110"},
    {'E', 1, "111"}, 
  };

  char texto[] = "ABACATE";
  char codificado[100] = "";

  printf("Texto original: %s\n", texto);

  for (int i = 0; i < strlen(texto); i++) {
    for (int j = 0; j < 5; j++) {
      if (texto[i] == tabela[j].letra) {
        strcat(codificado, tabela[j].codigo);
      }
    }
  }
  printf("Texto codificando em Huffman: %s\n", codificado);

  return 0;
}
