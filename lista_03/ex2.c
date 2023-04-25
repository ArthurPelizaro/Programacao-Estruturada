#include <stdio.h>

int main() {
    int i;

    // Imprime o nome em uma linha por vez
    printf("Imprimindo o nome em uma linha por vez:\n");
    for (i = 0; i < 10; i++) {
        printf("Seu nome\n");
    }

    // Imprime o nome sem quebra de linhas e com separação por vírgulas
    printf("Imprimindo o nome sem quebra de linhas e com separação por vírgulas:\n");
    for (i = 0; i < 9; i++) {
        printf("Seu nome, ");
    }
    printf("Seu nome.\n");

    return 0;
}