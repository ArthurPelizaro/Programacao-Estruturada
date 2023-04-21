#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d", linha);
        }
        printf("\n");
    }

    return 0;
}
