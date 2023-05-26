#include <stdio.h>

#define LARGURA 100
#define ALTURA 256

void gerarImagemPGM() {
    FILE *arquivo;
    char nomeArquivo[] = "imagem.pgm";
    int imagem[ALTURA][LARGURA];
    int i, j;

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    // Escreve o cabeçalho do arquivo .pgm
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "%d %d\n", LARGURA, ALTURA);
    fprintf(arquivo, "255\n");

    // Gera os valores de tom de cinza para a imagem
    for (i = 0; i < ALTURA; i++) {
        for (j = 0; j < LARGURA; j++) {
            imagem[i][j] = i;  // Valor de tom de cinza igual ao número da linha
            fprintf(arquivo, "%d ", imagem[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso.\n", nomeArquivo);
}

int main() {
    gerarImagemPGM();

    return 0;
}
