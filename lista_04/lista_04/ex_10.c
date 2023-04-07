#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, soma, resultado;

    // Define a semente do gerador de números aleatórios
    srand(time(NULL));

    // Gera dois números aleatórios entre 0 e 99
    num1 = rand() % 100;
    num2 = rand() % 100;

    // Calcula a soma dos números gerados
    soma = num1 + num2;

    // Solicita que o usuário digite a soma dos números gerados
    printf("Digite a soma de %d e %d: ", num1, num2);
    scanf("%d", &resultado);

    // Verifica se a resposta do usuário está correta ou incorreta
    if (resultado == soma) {
        printf("Parabéns! Sua resposta está correta.\n");
    } else {
        printf("Que pena! Sua resposta está incorreta.\n");
    }

    return 0;
}
