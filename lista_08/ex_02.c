#include <stdio.h>

#define NUM_NUMEROS 100
#define NUM_POR_LINHA 10

int main() {
    FILE *arquivo;
    int i;

    // Abre o arquivo para escrita
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Grava os números no arquivo
    for (i = 0; i < NUM_NUMEROS; i++) {
        fprintf(arquivo, "%2d ", i);

        // Quebra de linha a cada dez números
        if ((i + 1) % NUM_POR_LINHA == 0) {
            fprintf(arquivo, "\n");
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Números gravados no arquivo 'numeros.txt'.\n");

    return 0;
}
