#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main()
{
    int numeros[TAM], i, j, temp;

    srand(time(NULL)); // semente para geração de números aleatórios

    // inicializa o array com números de 1 a 25
    for (i = 0; i < 25; i++) {
        numeros[i] = i + 1;
    }

    // embaralha o array para gerar 15 números aleatórios sem repetição
    for (i = 0; i < TAM; i++) {
        j = rand() % (25 - i) + i; // gera um índice aleatório entre i e 24
        temp = numeros[i]; // troca o número atual com o número do índice aleatório
        numeros[i] = numeros[j];
        numeros[j] = temp;
    }

    // imprime os 15 números gerados
    printf("Os 15 números sorteados foram:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
