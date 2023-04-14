#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (int linha = altura; linha >= 1; linha--) {
        for (int coluna = linha; coluna >= 1; coluna--) {
            printf("%d ", coluna);
        }
        printf("\n");
    }

    return 0;
}
