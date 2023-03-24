#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, d1, resultado1, resultado2, resultado3;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero (real): ");
    scanf("%f", &d1);
    resultado1 = 2 * n1 * (n2 / 2);
    resultado2 = 3 * n1 + d1;
    resultado3 = pow(d1, 3);
    printf("O produto do dobro do primeiro com metade do segundo: %.1f\n", resultado1);
    printf("A soma do triplo do primeiro com o terceiro: %.1f\n", resultado2);
    printf("O terceiro elevado ao cubo: %.1f\n", resultado3);
    return 0;
}