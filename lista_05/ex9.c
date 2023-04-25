#include <stdio.h>

int main() {
    int numeros[11];
    int i;

    // Preenchendo o vetor com os números de 10 a 20
    for (i = 0; i < 11; i++) {
        numeros[i] = i + 10;
    }

    // Mostrando os elementos pares do vetor de trás para frente
    printf("Elementos pares do vetor de trás para frente: ");
    for (i = 10; i >= 0; i--) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    // Mostrando os números ímpares
    printf("Números ímpares: ");
    for (i = 0; i < 11; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}
