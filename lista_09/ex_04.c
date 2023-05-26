#include <stdio.h>

#define ALTURA 10
#define LARGURA 7

// Função para gerar o arquivo de imagem .pbm para um número específico
void gerarImagemPBM(int numero) {
    FILE *arquivo;
    char nomeArquivo[20];
    int i, j;

    // Constrói o nome do arquivo
    sprintf(nomeArquivo, "%d.pbm", numero);

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    // Escreve o cabeçalho do arquivo .pbm
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "%d %d\n", LARGURA, ALTURA);

    // Gera a imagem para o número especificado
    for (i = 0; i < ALTURA; i++) {
        for (j = 0; j < LARGURA; j++) {
            // Verifica se a posição atual deve ser preenchida com 1 (pixel ligado)
            if (numero == 0) {
                if (i == 0 || i == ALTURA - 1 || j == 0 || j == LARGURA - 1) {
                    fprintf(arquivo, "1 ");
                } else {
                    fprintf(arquivo, "0 ");
                }
            } else if (numero == 1) {
                if (j == LARGURA / 2) {
                    fprintf(arquivo, "1 ");
                } else {
                    fprintf(arquivo, "0 ");
                }
            } else if (numero == 2) {
                if (i == 0 || i == ALTURA / 2 || i == ALTURA - 1 || (i < ALTURA / 2 && j == LARGURA - 1) || (i >= ALTURA / 2 && j == 0)) {
                    fprintf(arquivo, "1 ");
                } else {
                    fprintf(arquivo, "0 ");
                }
            }
            // Adicione condições semelhantes para os outros números (3 a 9)
        }
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso.\n", nomeArquivo);
}

int main() {
    int numero;

    // Gera os arquivos de imagem para os números de 0 a 9
    for (numero = 0; numero <= 9; numero++) {
        gerarImagemPBM(numero);
    }

    return 0;
}
