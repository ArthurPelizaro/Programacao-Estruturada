#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[4];
    int i;
    srand(time(NULL));

    // Preenchendo o vetor com 0 e 1 aleatoriamente
    for (i = 0; i < 4; i++) {
        vetor[i] = rand() % 2;
    }

    // Imprimindo o vetor
    printf("Vetor de 0's e 1's aleatórios:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
