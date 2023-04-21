#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10];
    int i, j = 2, k = 10;

    // Preenchendo o vetorA com os números pares de 2 a 20
    for (i = 0; i < 10; i++) {
        vetorA[i] = j;
        j += 2;
    }

    // Preenchendo o vetorB com os números de 10 a 19
    for (i = 0; i < 10; i++) {
        vetorB[i] = k;
        k++;
    }

    // Realizando a soma dos elementos correspondentes dos vetores A e B
    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    // Imprimindo os vetores A, B e C
    printf("Vetor A de números pares de 2 a 20:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B de números de 10 a 19:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    printf("Vetor C resultante da soma dos vetores A e B:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
