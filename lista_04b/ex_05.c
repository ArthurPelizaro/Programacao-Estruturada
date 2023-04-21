#include <stdio.h>

int main() {
    int altura, num = 1;

    printf("Digite a altura da piramide: ");
    scanf("%d", &altura);

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
