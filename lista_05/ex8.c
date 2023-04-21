#include <stdio.h>

int main() {
    int numeros[5];
    int cubos[5];
    int i;

    // Preenchendo o vetor de números
    printf("Digite cinco números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calculando os cubos dos números e preenchendo o vetor de cubos
    for (i = 0; i < 5; i++) {
        cubos[i] = numeros[i] * numeros[i] * numeros[i];
    }

    // Mostrando os dois vetores na tela
    printf("Vetor de números: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Vetor de cubos: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", cubos[i]);
    }
    printf("\n");

    return 0;
}
