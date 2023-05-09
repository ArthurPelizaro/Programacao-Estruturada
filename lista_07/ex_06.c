#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, unidade, dezena, centena, milhar;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um número aleatório entre 1000 e 9999
    num = rand() % 9000 + 1000;

    // Calcula as unidades, dezenas, centenas e milhares
    unidade = num % 10;
    dezena = (num / 10) % 10 * 10;
    centena = (num / 100) % 10 * 100;
    milhar = num / 1000 * 1000;

    printf("Número: %d\n", num);
    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);
    printf("Milhar: %d\n", milhar);

    return 0;
}
