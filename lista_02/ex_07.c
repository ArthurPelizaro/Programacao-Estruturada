#include <stdio.h>
#include <math.h>

#define COBERTURA_TINTA 3 // em metros quadrados
#define PRECO_LATA 80 // em reais
#define LITROS_LATA 18

int main() {
    float tamanho_area, litros_necessarios, latas_necessarias, preco_total;
    printf("Digite o tamanho da area em metros quadrados: ");
    scanf("%f", &tamanho_area);
    litros_necessarios = ceil(tamanho_area / COBERTURA_TINTA);
    latas_necessarias = ceil(litros_necessarios / LITROS_LATA);
    preco_total = latas_necessarias * PRECO_LATA;
    printf("Quantidade de latas necessarias: %.0f\n", latas_necessarias);
    printf("Preco total: R$ %.2f\n", preco_total);
    return 0;
}