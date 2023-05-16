#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    char filename[] = "pokemon.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo %s\n", filename);
        return 1;
    }

    int option;
    printf("Menu:\n");
    printf("1. Imprimir conteúdo do arquivo\n");
    printf("2. Contar linhas\n");
    printf("3. Pesquisar pela primeira letra\n");
    printf("Digite a opção: ");
    scanf("%d", &option);

    if (option == 1) {
        char line[MAX_LINE_LENGTH];
        while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
            printf("%s", line);
        }
    } else if (option == 2) {
        int count = 0;
        char line[MAX_LINE_LENGTH];
        while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
            count++;
        }
        printf("Número de linhas: %d\n", count);
    } else if (option == 3) {
        char letter;
        printf("Digite a primeira letra: ");
        scanf(" %c", &letter);

        char line[MAX_LINE_LENGTH];
        while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
            if (line[0] == letter) {
                printf("%s", line);
            }
        }
    } else {
        printf("Opção inválida\n");
    }

    fclose(file);
    return 0;
}
