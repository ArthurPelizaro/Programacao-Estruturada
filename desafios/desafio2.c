#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int senha, tentativas = 5, palpite;

    // Gera um número aleatório entre 1 e 100
    srand(time(0));
    senha = rand() % 100 + 1;

    printf("Bem-vindo(a) ao sistema de segurança da Colônia Tijuco!\n\n");

    while (tentativas > 0) {
        printf("Digite um número entre 1 e 100: ");
        scanf("%d", &palpite);

        // Verifica se o palpite é válido
        if (palpite < 1 || palpite > 100) {
            printf("Entrada inválida. Digite um número entre 1 e 100.\n\n");
            continue;
        }

        // Verifica se o palpite é igual à senha
        if (palpite == senha) {
            printf("Senha correta! Acesso garantido!\n");
            return 0;
        }

        // Verifica se o palpite é menor que a senha
        if (palpite < senha) {
            printf("A senha é maior do que o valor inserido.\n");
        }

        // Verifica se o palpite é maior que a senha
        if (palpite > senha) {
            printf("A senha é menor do que o valor inserido.\n");
        }

        tentativas--;

        if (tentativas > 0) {
            printf("Você tem mais %d tentativa(s).\n\n", tentativas);
        } else {
            printf("Senha incorreta. Número de tentativas excedido!\n");
        }
    }

    return 0;
}
