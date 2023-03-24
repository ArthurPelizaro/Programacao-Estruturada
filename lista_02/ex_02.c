#include <stdio.h>
#define PI 3.14159265359 // definição da constante PI

int main() {
    float raio, perimetro, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    area = PI * raio * raio;
    printf("Raio: %.1f. Perimetro: %.1f. Area: %.1f.\n", raio, perimetro, area);
    return 0;
}