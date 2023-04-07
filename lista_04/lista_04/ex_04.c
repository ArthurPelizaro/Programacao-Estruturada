#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um número aleatório entre min e max
int rand_int(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int player_shot, goalie_defense, score = 0, misses = 0;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Desenho do gol
    printf("==================================\n");
    printf("|       1      |       2      |       3      |\n");
    printf("|              |              |              |\n");
    printf("|      4       |       5      |       6      |\n");
    printf("|              |              |              |\n");
    printf("|      7       |       8      |       9      |\n");
    printf("==================================\n");

    printf("Bem-vindo(a) ao jogo de disputa de pênaltis!\n\n");
    printf("Você tem 5 chutes para marcar gols e derrotar o goleiro.\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Chute %d: ", i+1);
        scanf("%d", &player_shot);

        // Verifica se o chute do jogador é válido
        if (player_shot < 1 || player_shot > 9) {
            printf("Chute inválido. Escolha um número de 1 a 9.\n\n");
            i--; // Repete o chute atual
            continue;
        }

        // Gera a defesa do goleiro
        goalie_defense = rand_int(1, 9);

        // Verifica se o goleiro defendeu ou se foi gol
        if (player_shot == goalie_defense) {
            printf("Defendido!\n\n");
            misses++;
        } else {
            printf("GOOOOOOL!!!\n\n");
            score++;
        }
    }

    // Exibe o resultado final
    printf("Fim de jogo! Você marcou %d gols e perdeu %d chutes.\n", score, misses);

    if (score >= 3) {
        printf("Parabéns! Você venceu o jogo de disputa de pênaltis!\n");
    } else {
        printf("Que pena! O goleiro venceu o jogo de disputa de pênaltis.\n");
    }

    return 0;
}
