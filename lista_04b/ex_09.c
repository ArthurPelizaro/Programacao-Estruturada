#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    for (int linha = altura - 1; linha >= 1; linha--) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
