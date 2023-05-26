#include <stdio.h>

#define LARGURA 60
#define ALTURA 100
#define ALTURA_COR 20

void gerarImagem() {
    FILE *arquivo;
    char nomeArquivo[] = "imagem.pgm";
    int imagem[ALTURA][LARGURA];
    int cores[] = {0, 64, 128, 192, 255};
    int i, j, k;

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

    // Preenche a imagem com os tons de cinza
    for (i = 0; i < ALTURA; i++) {
        // Determina a cor para a linha atual
        int cor = cores[i / ALTURA_COR];

        // Preenche a linha com a cor selecionada
        for (j = 0; j < LARGURA; j++) {
            imagem[i][j] = cor;
            fprintf(arquivo, "%d ", imagem[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso.\n", nomeArquivo);
}

int main() {
    gerarImagem();

    return 0;
}
