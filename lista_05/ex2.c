#include <stdio.h>

int main() {
    int vetor[10];
    int i, j = 2;

    // Preenchendo o vetor com os números pares de 2 a 20
    for (i = 0; i < 10; i++) {
        vetor[i] = j;
        j += 2;
    }

    // Imprimindo o vetor
    printf("Vetor de números pares de 2 a 20:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
