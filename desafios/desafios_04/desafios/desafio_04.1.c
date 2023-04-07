#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int operacao, resultado, resposta, num1, num2, pontos = 0, erros = 0;
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    printf("Bem-vindo ao jogo de operacoes matematicas!\n\n");
    printf("Voce tem que acertar o resultado de operacoes aleatorias geradas pelo computador.\n");
    printf("Voce ganha 1 ponto para cada resposta correta e perde 1 ponto para cada resposta errada.\n");
    printf("O jogo termina depois de 10 operacoes ou 3 erros.\n\n");

    for (int i = 1; i <= 10; i++) {
        num1 = rand() % 10; // gera um número aleatório entre 0 e 9
        num2 = rand() % 10; // gera um número aleatório entre 0 e 9
        operacao = rand() % 3; // gera um número aleatório entre 0 e 2
        if (operacao == 0) { // adição
            resultado = num1 + num2;
            printf("%d) %d + %d = ", i, num1, num2);
        } else if (operacao == 1) { // subtração
            resultado = num1 - num2;
            printf("%d) %d - %d = ", i, num1, num2);
        } else { // multiplicação
            resultado = num1 * num2;
            printf("%d) %d * %d = ", i, num1, num2);
        }
        scanf("%d", &resposta);
        if (resposta == resultado) {
            printf("Resposta correta!\n");
            pontos++;
        } else {
            printf("Resposta incorreta. O resultado correto era %d.\n", resultado);
            pontos--;
            erros++;
            if (erros == 3) {
                printf("Voce cometeu 3 erros. Fim de jogo.\n");
                break;
            }
        }
    }
    printf("Voce fez %d pontos.\n", pontos);

    return 0;
}
