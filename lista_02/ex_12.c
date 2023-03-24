#include <stdio.h>

int main() {
    char equipe[30];
    int vitorias, empates, derrotas, total_jogos;
    float perc_vitorias, perc_empates, perc_derrotas;

    printf("Digite o nome da equipe: ");
    scanf("%[^\n]s", equipe); // leitura de string com espaços

    printf("Digite o número de vitórias: ");
    scanf("%d", &vitorias);

    printf("Digite o número de empates: ");
    scanf("%d", &empates);

    printf("Digite o número de derrotas: ");
    scanf("%d", &derrotas);

    total_jogos = vitorias + empates + derrotas;

    if (total_jogos == 0) {
        printf("Não foram registrados jogos da equipe.\n");
        return 0;
    }

    perc_vitorias = ((float)vitorias / total_jogos) * 100;
    perc_empates = ((float)empates / total_jogos) * 100;
    perc_derrotas = ((float)derrotas / total_jogos) * 100;

    printf("%s\n", equipe);
    printf("Vitórias: %d - %.2f%%\n", vitorias, perc_vitorias);
    printf("Empates: %d - %.2f%%\n", empates, perc_empates);
    printf("Derrotas: %d - %.2f%%\n", derrotas, perc_derrotas);

    return 0;
}
