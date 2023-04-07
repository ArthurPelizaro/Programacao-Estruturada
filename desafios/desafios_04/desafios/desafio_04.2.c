#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma de todos os múltiplos de 3 ou 5 abaixo de 1000 é: %d\n", soma);

    return 0;
}


//Saída: A soma de todos os múltiplos de 3 ou 5 abaixo de 1000 é: 233168