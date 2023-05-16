#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivoOriginal, *arquivoConvertido;
    char nomeArquivoOriginal[100], nomeArquivoConvertido[100];
    char caractere;

    printf("Digite o nome do arquivo original: ");
    scanf("%s", nomeArquivoOriginal);

    printf("Digite o nome do arquivo convertido: ");
    scanf("%s", nomeArquivoConvertido);

    // Abre o arquivo original para leitura
    arquivoOriginal = fopen(nomeArquivoOriginal, "r");
    if (arquivoOriginal == NULL) {
        printf("Erro ao abrir o arquivo original.\n");
        return 1;
    }

    // Abre o arquivo convertido para escrita
    arquivoConvertido = fopen(nomeArquivoConvertido, "w");
    if (arquivoConvertido == NULL) {
        printf("Erro ao abrir o arquivo convertido.\n");
        fclose(arquivoOriginal);
        return 1;
    }

    // Lê o arquivo original, converte as letras minúsculas para maiúsculas e grava no arquivo convertido
    while ((caractere = fgetc(arquivoOriginal)) != EOF) {
        fputc(toupper(caractere), arquivoConvertido);
    }

    // Fecha os arquivos
    fclose(arquivoOriginal);
    fclose(arquivoConvertido);

    printf("Arquivo convertido gravado com sucesso.\n");

    return 0;
}
