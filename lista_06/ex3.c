#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Semente para a geração de números aleatórios
    srand(time(NULL));

    // Definindo a matriz
    int matriz[5][5];

    // Preenchendo a matriz com números aleatórios
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 21 - 10;
        }
    }

    // Imprimindo a matriz com 3 caracteres para cada elemento
    printf("Matriz gerada:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
