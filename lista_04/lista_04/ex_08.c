#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // inicializa a semente do gerador de números aleatórios com o valor atual do relógio
    srand(time(NULL));
    
    int numeros[6]; // array para armazenar os números gerados
    int i, j, num;
    
    // gera os seis números aleatórios
    for (i = 0; i < 6; i++) {
        // gera um número aleatório entre 1 e 60 que ainda não foi gerado
        do {
            num = rand() % 60 + 1;
            // verifica se o número já existe no array
            for (j = 0; j < i; j++) {
                if (num == numeros[j]) {
                    num = 0; // marca o número como repetido para gerar outro número
                    break;
                }
            }
        } while (num == 0);
        
        numeros[i] = num; // armazena o número no array
    }
    
    // ordena os números em ordem crescente
    for (i = 0; i < 5; i++) {
        for (j = i+1; j < 6; j++) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
    
    // imprime os números gerados em ordem crescente
    printf("Numeros gerados: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
