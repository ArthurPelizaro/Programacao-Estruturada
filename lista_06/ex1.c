#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Semente para a geração de números aleatórios
    srand(time(NULL));

    // Definindo a matriz
    int matriz[10][10];

    // Preenchendo a matriz com números aleatórios
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 90 + 10;
        }
    }

    // Imprimindo a matriz
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
