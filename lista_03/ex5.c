#include <stdio.h>

int main() {
    int i;

    printf("Números múltiplos de 3 entre 100 e 200 em ordem crescente:\n");
    for (i = 100; i <= 200; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}