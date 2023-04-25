#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[8];
    int i, contador = 0, somaMaior30 = 0, somaTotal = 0;
    srand(time(NULL));

    // Preenchendo o vetor com números aleatórios entre 0 e 50
    for (i = 0; i < 8; i++) {
        vetor[i] = rand() % 51;
        somaTotal += vetor[i];
        if (vetor[i] > 30) {
            contador++;
            somaMaior30 += vetor[i];
        }
    }

    // Imprimindo o vetor
    printf("Vetor de números aleatórios entre 0 e 50:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Informando quantos números são maiores que 30 e somando esses números
    printf("Quantidade de números maiores que 30: %d\n", contador);
    printf("Soma dos números maiores que 30: %d\n", somaMaior30);

    // Somando todos os números do vetor
    printf("Soma total dos números do vetor: %d\n", somaTotal);

    return 0;
}
