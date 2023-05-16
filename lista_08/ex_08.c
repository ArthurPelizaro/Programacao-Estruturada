#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char linha[100];
    int numLinha = 1;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê e imprime o conteúdo do arquivo com numeração de linha
    printf("\nConteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%d. %s", numLinha, linha);
        numLinha++;
    }

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
