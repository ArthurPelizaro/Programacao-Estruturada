#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    // Imprime a primeira metade do triângulo
    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d", linha);
        }
        printf("\n");
    }

    // Imprime a segunda metade do triângulo
    for (int linha = altura-1; linha >= 1; linha--) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d", linha);
        }
        printf("\n");
    }

    return 0;
}
