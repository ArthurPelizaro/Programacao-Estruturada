#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice, computer_choice;
    const char* choices[] = {"pedra", "papel", "tesoura"};

    // inicializa o gerador de números aleatórios
    srand(time(NULL));

    // gera um número aleatório entre 0 e 2 para o computador
    computer_choice = rand() % 3;

    // solicita ao jogador para escolher uma opção
    printf("Escolha uma opção:\n");
    printf("0 - pedra\n");
    printf("1 - papel\n");
    printf("2 - tesoura\n");
    scanf("%d", &player_choice);

    // verifica se a opção escolhida pelo jogador é válida
    if (player_choice < 0 || player_choice > 2) {
        printf("Opção inválida!\n");
        return 1;
    }

    // exibe as opções escolhidas pelo jogador e pelo computador
    printf("Você escolheu %s, o computador escolheu %s.\n", choices[player_choice], choices[computer_choice]);

    // verifica quem venceu
    if ((player_choice == 0 && computer_choice == 2) || (player_choice == 1 && computer_choice == 0) || (player_choice == 2 && computer_choice == 1)) {
        printf("Você venceu!\n");
    } else if (player_choice == computer_choice) {
        printf("Empate!\n");
    } else {
        printf("O computador venceu!\n");
    }

    return 0;
}
