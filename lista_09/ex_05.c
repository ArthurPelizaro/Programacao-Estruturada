#include <stdio.h>

#define TAMANHO_LABIRINTO 11

void gerarLabirintoPBM() {
    FILE *arquivo;
    char nomeArquivo[] = "labirinto.pbm";
    int labirinto[TAMANHO_LABIRINTO][TAMANHO_LABIRINTO] = {
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    int i, j;

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    // Escreve o cabeçalho do arquivo .pbm
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "%d %d\n", TAMANHO_LABIRINTO, TAMANHO_LABIRINTO);

    // Escreve os dados do labirinto no arquivo
    for (i = 0; i < TAMANHO_LABIRINTO; i++) {
        for (j = 0; j < TAMANHO_LABIRINTO; j++) {
            fprintf(arquivo, "%d ", labirinto[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso.\n", nomeArquivo);
}

int main() {
    gerarLabirintoPBM();

    return 0;
}
