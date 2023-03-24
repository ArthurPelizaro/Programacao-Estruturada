#include <stdio.h>

int main() {
    float farenheit, celsius;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &farenheit);
    celsius = (5 * (farenheit - 32)) / 9;
    printf("%.1f graus Farenheit equivalem a %.1f graus Celsius\n", farenheit, celsius);
    return 0;
}