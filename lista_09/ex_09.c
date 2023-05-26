#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGURA 60
#define ALTURA 100

void gerarImagem() {
    FILE *arquivo;
    char nomeArquivo[] = "imagem.pgm";
    int imagem[ALTURA][LARGURA];
    int i, j;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

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

    // Preenche a imagem com os tons de cinza aleatórios
    for (i = 0; i < ALTURA; i++) {
        int limiteInferior, limiteSuperior;

        // Determina os limites para a linha atual
        if (i < 20) {
            limiteInferior = 0;
            limiteSuperior = 55;
        } else if (i < 40) {
            limiteInferior = 45;
            limiteSuperior = 105;
        } else if (i < 60) {
            limiteInferior = 95;
            limiteSuperior = 155;
        } else if (i < 80) {
            limiteInferior = 145;
            limiteSuperior = 205;
        } else {
            limiteInferior = 195;
            limiteSuperior = 255;
        }

        // Preenche a linha com valores aleatórios
        for (j = 0; j < LARGURA; j++) {
            imagem[i][j] = rand() % (limiteSuperior - limiteInferior + 1) + limiteInferior;
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
