#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, num_attempts = 0;
    srand(time(NULL));

    // gera um número aleatório entre 0 e 100
    secret_number = rand() % 101;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 0 e 100.\n");

    // loop para dar 5 chances ao jogador
    while (num_attempts < 5) {
        printf("Tentativa %d de 5: ", num_attempts + 1);
        scanf("%d", &guess);

        // verifica se o número é válido
        if (guess < 0 || guess > 100) {
            printf("Número inválido. Tente novamente.\n");
            continue;
        }

        // verifica se o número está correto
        if (guess == secret_number) {
            printf("Parabéns! Você acertou o número secreto %d em %d tentativas.\n", secret_number, num_attempts + 1);
            return 0;
        } else if (guess < secret_number) {
            printf("O número que você tentou é menor do que o número secreto. Tente novamente.\n");
        } else {
            printf("O número que você tentou é maior do que o número secreto. Tente novamente.\n");
        }

        num_attempts++;
    }

    printf("Suas 5 tentativas acabaram. O número secreto era %d.\n", secret_number);
    return 0;
}
