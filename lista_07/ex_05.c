#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n1, n2, i;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera dois números aleatórios entre 0 e 100
    n1 = rand() % 101;
    n2 = rand() % 101;

    // Garante que n1 < n2
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    // Imprime os números do intervalo entre n1 e n2
    for (i = n1 + 1; i < n2; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
