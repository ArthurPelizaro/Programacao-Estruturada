#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10
#define MIN_VALOR 10
#define MAX_VALOR 99

void gerarMatrizAleatoria(int matriz[LINHAS][COLUNAS]) {
    int i, j;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera os números aleatórios para preencher a matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % (MAX_VALOR - MIN_VALOR + 1) + MIN_VALOR;
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void gravarMatrizEmArquivo(int matriz[LINHAS][COLUNAS], const char *nomeArquivo) {
    FILE *arquivo;
    int i, j;

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Grava a matriz no arquivo
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Matriz gravada no arquivo '%s'.\n", nomeArquivo);
}

int main() {
    int matriz[LINHAS][COLUNAS];

    gerarMatrizAleatoria(matriz);
    imprimirMatriz(matriz);
    gravarMatrizEmArquivo(matriz, "matriz.txt");

    return 0;
}
