#include <stdio.h>

void imprimir_numeros(int n) {
    int i;
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exemplo de uso:
int main() {
    imprimir_numeros(10);  // Imprime: 0 1 2 3 4 5 6 7 8 9 10
    return 0;
}
