#include <stdio.h>

int main() {
    int i;

    printf("Números pares entre 0 e 100 em ordem crescente:\n");
    for (i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}