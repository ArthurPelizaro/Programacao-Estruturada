#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
    return rand() % 6 + 1; // Retorna um número aleatório entre 1 e 6
}

int main() {
    int i, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0;
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    for (i = 0; i < 1000; i++) {
        int resultado = dado();
        switch (resultado) {
            case 1: um++; break;
            case 2: dois++; break;
            case 3: tres++; break;
            case 4: quatro++; break;
            case 5: cinco++; break;
            case 6: seis++; break;
        }
    }
    printf("Porcentagem de vezes que cada face saiu:\n");
    printf("1: %.2f%%\n", (float)um / 10);
    printf("2: %.2f%%\n", (float)dois / 10);
    printf("3: %.2f%%\n", (float)tres / 10);
    printf("4: %.2f%%\n", (float)quatro / 10);
    printf("5: %.2f%%\n", (float)cinco / 10);
    printf("6: %.2f%%\n", (float)seis / 10);
    return 0;
}
