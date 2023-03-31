#include <stdio.h>

int main() {
    int i;

    printf("Números de 0 a 100, substituindo múltiplos de 4 por 'plim':\n");
    for (i = 0; i <= 100; i++) {
        if (i % 4 == 0) {
            printf("plim");
        } else {
            printf("%d", i);
        }

        if (i != 100) {
            printf(", ");
        }
    }

    return 0;
}