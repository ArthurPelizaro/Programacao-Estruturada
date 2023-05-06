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
    printf("\n");

    // Calculando a soma dos números negativos e a soma dos números positivos
    int somaNegativos = 0;
    int somaPositivos = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matriz[i][j] < 0)
            {
                somaNegativos += matriz[i][j];
            }
            else
            {
                somaPositivos += matriz[i][j];
            }
        }
    }

    // Imprimindo as somas dos negativos e dos positivos
    printf("Soma dos números negativos: %d\n", somaNegativos);
    printf("Soma dos números positivos: %d\n", somaPositivos);

    return 0;
}
