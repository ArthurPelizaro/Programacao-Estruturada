#include <stdio.h>

int main() {
    int vetor[8];
    int i, num, posicao = -1;

    // Preenchendo o vetor com números inteiros
    printf("Preencha o vetor com 8 números inteiros:\n");
    for (i = 0; i < 8; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Solicitando um número ao usuário
    printf("\nDigite um número para pesquisar no vetor: ");
    scanf("%d", &num);

    // Pesquisando o número no vetor
    for (i = 0; i < 8; i++) {
        if (vetor[i] == num) {
            posicao = i;
            break;
        }
    }

    // Imprimindo o resultado da pesquisa
    if (posicao != -1) {
        printf("\nO número %d foi encontrado na posição %d do vetor.\n", num, posicao);
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n", num);
    }

    return 0;
}
