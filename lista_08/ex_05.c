#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_LINHAS 10
#define MAX_LINHAS 20
#define MIN_PALAVRAS 5
#define MAX_PALAVRAS 20
#define MIN_LETRAS 1
#define MAX_LETRAS 15

char gerarLetraAleatoria() {
    return (rand() % 26) + 'a';  // Gera uma letra minúscula aleatória
}

int main() {
    FILE *arquivo;
    int numLinhas, numPalavras, numLetras;
    int i, j, k;

    srand(time(NULL));  // Inicializa o gerador de números aleatórios

    // Gera o número aleatório de linhas
    numLinhas = rand() % (MAX_LINHAS - MIN_LINHAS + 1) + MIN_LINHAS;

    // Abre o arquivo para escrita
    arquivo = fopen("texto_aleatorio.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Gera o texto aleatório
    for (i = 0; i < numLinhas; i++) {
        // Gera o número aleatório de palavras
        numPalavras = rand() % (MAX_PALAVRAS - MIN_PALAVRAS + 1) + MIN_PALAVRAS;

        // Gera as palavras aleatórias
        for (j = 0; j < numPalavras; j++) {
            // Gera o número aleatório de letras
            numLetras = rand() % (MAX_LETRAS - MIN_LETRAS + 1) + MIN_LETRAS;

            // Gera as letras aleatórias
            for (k = 0; k < numLetras; k++) {
                char letra = gerarLetraAleatoria();
                fprintf(arquivo, "%c", letra);
            }

            // Adiciona um espaço entre as palavras
            fprintf(arquivo, " ");
        }

        // Quebra de linha ao final de cada linha
        fprintf(arquivo, "\n");
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Texto aleatório gravado no arquivo 'texto_aleatorio.txt'.\n");

    return 0;
}
