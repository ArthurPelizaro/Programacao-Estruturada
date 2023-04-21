#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];
    int i;
    srand(time(NULL)); // Inicializando o gerador de números aleatórios

    // Preenchendo o vetor com números aleatórios entre 97 e 122
    for (i = 0; i < 20; i++) {
        vetor[i] = rand() % 26 + 97; // Gerando um número aleatório entre 97 e 122 (tabela ASCII)
    }

    // Imprimindo o vetor normalmente com a máscara de números inteiros %d
    printf("Vetor com a máscara de inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprimindo o vetor utilizando a máscara de char %c
    printf("Vetor com a máscara de caracteres:\n");
    for (i = 0; i < 20; i++) {
        printf("%c ", vetor[i]);
    }
    printf("\n");

    return 0;
}
