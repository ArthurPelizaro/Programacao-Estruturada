#include <stdio.h>

int main()
{
    char equipe1[20], equipe2[20];
    int vitorias1, vitorias2, empates1, empates2, derrotas1, derrotas2;
    int pontos1, pontos2;

    // Entrada de dados
    printf("Digite o nome da primeira equipe: ");
    scanf("%s", equipe1);

    printf("Digite o número de vitórias, empates e derrotas da primeira equipe: ");
    scanf("%d %d %d", &vitorias1, &empates1, &derrotas1);

    printf("Digite o nome da segunda equipe: ");
    scanf("%s", equipe2);

    printf("Digite o número de vitórias, empates e derrotas da segunda equipe: ");
    scanf("%d %d %d", &vitorias2, &empates2, &derrotas2);

    // Cálculo da pontuação
    pontos1 = vitorias1 * 3 + empates1;
    pontos2 = vitorias2 * 3 + empates2;

    // Saída de dados
    printf("Equipe: %s | Vitórias: %d | Empates: %d | Derrotas: %d | Pontuação: %d\n", equipe1, vitorias1, empates1, derrotas1, pontos1);
    printf("Equipe: %s | Vitórias: %d | Empates: %d | Derrotas: %d | Pontuação: %d\n", equipe2, vitorias2, empates2, derrotas2, pontos2);

    return 0;
}