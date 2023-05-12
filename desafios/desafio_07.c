#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;

    srand(time(NULL));  // inicializa gerador de números aleatórios

    // preenche as linhas e colunas de 0 a 8 com valores aleatórios entre 0 e 9
    for (i = 0; i < LINHAS - 1; i++) {
        for (j = 0; j < COLUNAS - 1; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    // calcula a soma das linhas
    for (i = 0; i < LINHAS - 1; i++) {
        int soma = 0;
        for (j = 0; j < COLUNAS - 1; j++) {
            soma += matriz[i][j];
        }
        matriz[i][COLUNAS - 1] = soma;  // insere a soma na coluna 9
    }

    // calcula a soma das colunas
    for (j = 0; j < COLUNAS - 1; j++) {
        int soma = 0;
        for (i = 0; i < LINHAS - 1; i++) {
            soma += matriz[i][j];
        }
        matriz[LINHAS - 1][j] = soma;  // insere a soma na linha 9
    }

    // imprime a matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
