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
            matriz[i][j] = rand() % 101;
        }
    }

    // Encontrando o maior e o menor valor da matriz
    int maiorValor = matriz[0][0];
    int menorValor = matriz[0][0];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(matriz[i][j] > maiorValor)
            {
                maiorValor = matriz[i][j];
            }
            if(matriz[i][j] < menorValor)
            {
                menorValor = matriz[i][j];
            }
        }
    }

    // Imprimindo a matriz e o maior e o menor valor
    printf("Matriz gerada:\n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Maior valor: %d\n", maiorValor);
    printf("Menor valor: %d\n", menorValor);

    return 0;
}
