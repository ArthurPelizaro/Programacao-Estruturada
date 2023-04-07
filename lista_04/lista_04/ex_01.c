#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_num, computer_num, soma, is_even;

    // inicializa o gerador de números aleatórios
    srand(time(NULL));

    // gera um número aleatório entre 0 e 5 (inclusive) para o computador
    computer_num = rand() % 6;

    // solicita ao jogador para escolher um número entre 0 e 5 (inclusive)
    printf("Escolha um número entre 0 e 5: ");
    scanf("%d", &player_num);

    // verifica se o número escolhido pelo jogador é válido
    if (player_num < 0 || player_num > 5) {
        printf("Número inválido!\n");
        return 1;
    }

    // calcula a soma dos números escolhidos pelo jogador e pelo computador
    soma = player_num + computer_num;

    // verifica se a soma é par ou ímpar
    is_even = soma % 2 == 0;

    // exibe as informações do jogo
    printf("Você escolheu %d, o computador escolheu %d.\n", player_num, computer_num);
    printf("A soma é %d, que é %s.\n", soma, is_even ? "par" : "ímpar");
    if ((is_even && player_num % 2 == 0) || (!is_even && player_num % 2 != 0)) {
        printf("Você venceu!\n");
    } else {
        printf("O computador venceu!\n");
    }

    return 0;
}
