#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Lê o tamanho do terreno
  int N;
  printf("Digite o tamanho do terreno: ");
  scanf("%d", &N);

  // Gera o terreno aleatoriamente
  srand(time(NULL));
  int recursos = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int random = rand() % 5; // Probabilidade de 20% de ter recurso
      if (random == 0) {
        int recurso = rand() % 9 + 1; // Valor do recurso de 1 a 9
        printf("%d ", recurso);
        recursos += recurso;
      } else {
        printf(". ");
      }
    }
    printf("\n");
  }

  // Imprime a quantidade de recursos coletados ou mensagem de nenhum recurso encontrado
  if (recursos == 0) {
    printf("Nenhum recurso encontrado.\n");
  } else {
    printf("%d recursos coletados.\n", recursos);
  }

  return 0;
}