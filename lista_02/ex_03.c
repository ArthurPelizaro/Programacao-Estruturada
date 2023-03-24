#include <stdio.h>

int main() {
    float celsius, farenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    farenheit = (9 * celsius / 5) + 32;
    printf("%.1f graus Celsius equivalem a %.1f graus Farenheit\n", celsius, farenheit);
    return 0;
}