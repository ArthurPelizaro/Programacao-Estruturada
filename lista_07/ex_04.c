#include <stdio.h>

void imprimir_numeros(int n) {
    int i;
    for (i = n - 2; i >= n - 10; i -= 2) {
        printf("%d ", i);
    }
    printf("%d ", n);
    for (i = n + 2; i <= n + 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    imprimir_numeros(17);
    return 0;
}
