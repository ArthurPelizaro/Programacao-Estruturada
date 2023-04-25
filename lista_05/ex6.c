#include <stdio.h>
#include <math.h>

int main() {
    int vetor[4] = {1, 0, 1, 1}; // Exemplo de vetor com número binário 1011
    int decimal = 0;
    int i;

    // Convertendo o número binário para decimal
    for (i = 0; i < 4; i++) {
        decimal += vetor[i] * pow(2, i);
    }

    // Imprimindo o número binário e o número decimal correspondente
    printf("Número binário: ");
    for (i = 3; i >= 0; i--) {
        printf("%d", vetor[i]);
    }
    printf("\nNúmero decimal: %d\n", decimal);

    return 0;
}
