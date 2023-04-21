#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int binario[4];
    int decimal;
    int tentativas = 0;
    int acertos = 0;
    int erros = 0;
    int i;
    srand(time(NULL));

    // Gerando um número binário aleatório de 4 dígitos
    for (i = 0; i < 4; i++) {
        binario[i] = rand() % 2;
    }

    // Loop principal do jogo
    while (erros < 3) {
        // Convertendo o número binário para decimal
        decimal = 0;
        for (i = 0; i < 4; i++) {
            decimal += binario[i] * pow(2, i);
        }

        // Mostrando o número binário e solicitando a resposta do usuário
        printf("Número binário: ");
        for (i = 3; i >= 0; i--) {
            printf("%d", binario[i]);
        }
        printf("\nDigite o número decimal correspondente: ");
        int resposta;
        scanf("%d", &resposta);

        // Verificando se a resposta está correta e atualizando o placar
        if (resposta == decimal) {
            printf("Resposta correta!\n");
            acertos++;
        } else {
            printf("Resposta incorreta. O número decimal correto é %d.\n", decimal);
            erros++;
        }
    }

    // Fim do jogo
    printf("Fim do jogo. Você acertou %d vezes e errou %d vezes.\n", acertos, erros);

    return 0;
}
