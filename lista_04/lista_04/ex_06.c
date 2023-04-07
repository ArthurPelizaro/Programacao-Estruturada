#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // inicializa a semente do gerador de números aleatórios com o valor atual do relógio
    srand(time(NULL));
    
    // gera e imprime 10 números aleatórios entre 0 e 100
    for (int i = 0; i < 10; i++) {
        int num = rand() % 101; // gera um número aleatório entre 0 e 100
        printf("%d ", num); // imprime o número seguido de um espaço
    }
    
    printf("\n"); // pula uma linha no final da impressão
    return 0;
}
