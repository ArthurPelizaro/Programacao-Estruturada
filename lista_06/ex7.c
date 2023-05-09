#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int matriz[7][7];
  
  // gerando valores aleatórios entre 10 e 50
  srand(time(NULL));
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      matriz[i][j] = rand() % 41 + 10;
    }
  }
  
  // imprimindo a matriz original
  printf("Matriz original:\n");
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  // substituindo valores pares por zero
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if (matriz[i][j] % 2 == 0) {
        matriz[i][j] = 0;
      }
    }
  }
  
  // imprimindo a matriz com valores pares substituídos por zero
  printf("\nMatriz com valores pares substituídos por zero:\n");
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  // substituindo valores ímpares por um
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if (matriz[i][j] % 2 != 0) {
        matriz[i][j] = 1;
      }
    }
  }
  
  // imprimindo a matriz com valores ímpares substituídos por um
  printf("\nMatriz com valores ímpares substituídos por um:\n");
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
