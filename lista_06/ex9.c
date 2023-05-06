#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    double matriz[6][6];

    // semente para a função rand()
    srand(time(NULL));

    // preenche a matriz com valores aleatórios entre -1 e 1
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = -1.0 + 2.0 * ((double) rand() / RAND_MAX);
        }
    }

    // imprime a matriz original
    printf("Matriz original:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    // multiplica todos os elementos por 2
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] *= 2.0;
        }
    }

    // imprime a nova matriz após multiplicação
    printf("\nMatriz após multiplicação:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    // subtrai 1 de todos os elementos
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] -= 1.0;
        }
    }

    // imprime a nova matriz após subtração
    printf("\nMatriz após subtração:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
