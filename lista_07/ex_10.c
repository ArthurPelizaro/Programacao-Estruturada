#include <stdio.h>
#include <math.h>

float norma(int x, int y) {
  float modulo_vetor = sqrt(pow(x, 2) + pow(y, 2));
  return modulo_vetor;
}

int main() {
  int x, y;
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  printf("Digite o valor de y: ");
  scanf("%d", &y);
  float resultado = norma(x, y);
  printf("A norma do vetor é: %f", resultado);
  return 0;
}
