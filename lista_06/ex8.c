#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    double matriz[6][6];
    double media = 0;

    // semente para a função rand()
    srand(time(NULL));

    // preenche a matriz com valores aleatórios entre 0 e 1
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = (double) rand() / RAND_MAX;
            media += matriz[i][j];
        }
    }

    media /= 36.0; // divide a soma pela quantidade de elementos

    // imprime a matriz
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Media: %.2lf\n", media);

    return 0;
}
