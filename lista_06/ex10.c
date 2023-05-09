#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3

int linha_igual(int matriz[LINHAS][COLUNAS], int linha) {
    int i, valor;
    valor = matriz[linha][0];
    for (i = 1; i < COLUNAS; i++) {
        if (matriz[linha][i] != valor) {
            return 0;
        }
    }
    return valor;
}

int coluna_igual(int matriz[LINHAS][COLUNAS], int coluna) {
    int i, valor;
    valor = matriz[0][coluna];
    for (i = 1; i < LINHAS; i++) {
        if (matriz[i][coluna] != valor) {
            return 0;
        }
    }
    return valor;
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, igual;

    srand(time(NULL));  // inicializa gerador de números aleatórios

    // preenche a matriz com valores aleatórios
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 2;
        }
    }

    // imprime a matriz
    printf("Matriz gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // verifica se alguma linha ou coluna tem todos os valores iguais
    for (i = 0; i < LINHAS; i++) {
        igual = linha_igual(matriz, i);
        if (igual) {
            printf("Linha %d: valor %d\n", i, igual);
        }
    }

    for (j = 0; j < COLUNAS; j++) {
        igual = coluna_igual(matriz, j);
        if (igual) {
            printf("Coluna %d: valor %d\n", j, igual);
        }
    }

    return 0;
}
