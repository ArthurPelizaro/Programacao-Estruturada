#include <stdio.h>

void sequencia(int start, int stop, int step) {
    int i;
    double intervalo = stop - start;
    double incremento = intervalo / (step - 1);
    for (i = 0; i < step; i++) {
        double numero = start + i * incremento;
        printf("%.1f ", numero);
    }
    printf("\n");
}

int main() {
    sequencia(2, 3, 5);
    return 0;
}
