#include <stdio.h>

int main() {
    int vida, ataque, defesa;
    float xp;

    printf("Digite o valor da vida: ");
    scanf("%d", &vida);

    printf("Digite o valor do ataque: ");
    scanf("%d", &ataque);

    printf("Digite o valor da defesa: ");
    scanf("%d", &defesa);

    xp = (vida + ataque + defesa) / 3.0;

    if (xp >= 0 && xp <= 25) {
        printf("Novato\n");
    } else if (xp <= 50) {
        printf("Mago\n");
    } else if (xp <= 75) {
        printf("Mago Supremo\n");
    } else if (xp <= 100) {
        printf("Lorde das Magias\n");
    } else {
        printf("Experiência inválida\n");
    }

    return 0;
}