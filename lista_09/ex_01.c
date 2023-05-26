#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "imagem.pbm";
    int linhas = 100;
    int colunas = 100;
    int i, j;

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    // Escreve as primeiras linhas no arquivo
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#%s\n", nomeArquivo);
    fprintf(arquivo, "%d %d\n", colunas, linhas);

    // Gera e escreve a matriz de números aleatórios no arquivo
    srand(time(NULL));
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            int numeroAleatorio = rand() % 2;
            fprintf(arquivo, "%d ", numeroAleatorio);
        }
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso.\n", nomeArquivo);

    return 0;
}
