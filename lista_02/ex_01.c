#include <stdio.h>

int main() {
    int metros;
    float polegadas;
    printf("Digite a quantidade em metros: ");
    scanf("%d", &metros);
    polegadas = metros * 100 / 2.54;
    printf("%d metros equivalem a %.2f polegadas\n", metros, polegadas);
    return 0;
}