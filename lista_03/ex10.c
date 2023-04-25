#include <stdio.h>

int main() {
    int i, soma = 0;

    printf("Números pares de 0 a 100:\n");
    for (i = 0; i <= 100; i += 2) {
        printf("%d\n", i);
        soma += i;
    }
    printf("Soma total: %d\n", soma);

    return 0;
}
