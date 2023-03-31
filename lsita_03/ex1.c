#include <stdio.h>

int main() {
    int quantidade_skins;
    float preco_unitario, preco_total;

    printf("Digite a quantidade de skins compradas: ");
    scanf("%d", &quantidade_skins);

    if (quantidade_skins < 10) {
        preco_unitario = 1.30;
    } else {
        preco_unitario = 1.00;
    }

    preco_total = quantidade_skins * preco_unitario;

    printf("O valor total da compra é R$ %.2f\n", preco_total);

    return 0;
}