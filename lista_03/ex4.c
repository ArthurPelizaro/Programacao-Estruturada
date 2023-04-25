#include <stdio.h>

int main() {
    int i;

    printf("Números ímpares entre 0 e 100 em ordem decrescente:\n");
    for (i = 99; i >= 0; i--) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}