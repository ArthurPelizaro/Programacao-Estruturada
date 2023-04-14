#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura da piramide: ");
    scanf("%d", &altura);

    for (int linha = 1; linha <= altura; linha++) {
        for (int espaco = 1; espaco <= altura-linha; espaco++) {
            printf(" ");
        }
        for (int asterisco = 1; asterisco <= linha*2-1; asterisco++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
