#include <stdio.h>
#include <string.h>

int main(void) {

  typedef struct {
    int id;
    char nome[50];
    float nota;
  } Aluno;

  Aluno a1 = {1, "Bruno", 9.5};
  Aluno a2 = {2, "Teste", 6.5};

  printf("%s tirou %.1f\n", a1.nome, a1.nota);
  printf("%s tirou %.1f\n", a2.nome, a2.nota);
}
