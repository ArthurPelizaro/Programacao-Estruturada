#include <stdio.h>

int main() {
    int i;

    printf("Números múltiplos de 4 entre 100 e 300 em ordem decrescente:\n");
    for (i = 300; i >= 100; i--) {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}