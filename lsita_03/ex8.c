#include <stdio.h>

int main() {
    int i, j;

    printf("Tabuadas de 0 a 9:\n");
    for (i = 0; i <= 9; i++) {
        printf("\nTabuada do %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }

    return 0;
}