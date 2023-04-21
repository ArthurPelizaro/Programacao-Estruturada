#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura dos triangulos: ");
    scanf("%d", &altura);

    for (int linha = 1; linha <= altura; linha++) {
        // Triangulo esquerdo
        for (int i = 1; i <= altura-linha; i++) {
            printf(" ");
        }
        for (int j = 1; j <= linha; j++) {
            printf("*");
        }
        // Espaço entre os triangulos
        printf(" ");
        // Triangulo direito
        for (int k = 1; k <= linha; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
