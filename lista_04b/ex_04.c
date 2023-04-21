#include <stdio.h>

int main() {
    int altura, num = 1;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
