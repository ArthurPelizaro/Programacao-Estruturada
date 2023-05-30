#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGURA 100
#define ALTURA 100

void gerarImagemPGM() {
    FILE *arquivo;
    char nomeArquivo[] = "imagem.pgm";
    int imagem[LARGURA][ALTURA];
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

    // Gera os valores aleatórios para a imagem
    srand(time(NULL));  // Inicializa a semente do gerador de números aleatórios

    for (i = 0; i < ALTURA; i++) {
        for (j = 0; j < LARGURA; j++) {
            imagem[i][j] = rand() % 256;  // Gera um valor aleatório entre 0 e 255
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
