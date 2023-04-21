#include <stdio.h>

int main() {
    int i, soma = 0;

    printf("Números de 1 a 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
        soma += i;
    }
    printf("Soma total: %d\n", soma);

    return 0;
}
