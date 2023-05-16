#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char linha[100];
    int totalLinhas = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê e imprime o conteúdo do arquivo
    printf("\nConteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
        totalLinhas++;
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("\nTotal de linhas: %d\n", totalLinhas);

    return 0;
}
