#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NUMEROS 100

int main() {
    FILE *arquivo;
    int numeros[NUM_NUMEROS];
    int i;

    srand(time(NULL));  // inicializa gerador de números aleatórios

    // Gera os números aleatórios
    for (i = 0; i < NUM_NUMEROS; i++) {
        numeros[i] = rand() % 201 - 100;  // gera um número entre -100 e 100
    }

    // Abre o arquivo para escrita
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Grava os números no arquivo
    for (i = 0; i < NUM_NUMEROS; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Números gravados no arquivo 'numeros.txt'.\n");

    return 0;
}
