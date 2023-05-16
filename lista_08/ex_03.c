#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;

    // Abre o arquivo para escrita
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (1) {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é zero para sair do loop
        if (numero == 0) {
            break;
        }

        // Verifica se o número é positivo ou negativo
        if (numero > 0) {
            fprintf(arquivo, "%d -> positivo ", numero);
        } else {
            fprintf(arquivo, "%d -> negativo ", numero);
        }

        // Verifica se o número é par ou ímpar
        if (numero % 2 == 0) {
            fprintf(arquivo, "par\n");
        } else {
            fprintf(arquivo, "ímpar\n");
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Números gravados no arquivo 'numeros.txt'.\n");

    return 0;
}
