#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Semente para a geração de números aleatórios
    srand(time(NULL));

    // Definindo a matriz
    int matriz[5][5];

    // Preenchendo a matriz com valores aleatórios entre 100 e 999
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 900 + 100;
        }
    }

    // Imprimindo a matriz gerada
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

    // Encontrando o segundo maior e o segundo menor valor da matriz
    int maiorValor = matriz[0][0];
    int segundoMaiorValor = matriz[0][0];
    int menorValor = matriz[0][0];
    int segundoMenorValor = matriz[0][0];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matriz[i][j] > maiorValor)
            {
                segundoMaiorValor = maiorValor;
                maiorValor = matriz[i][j];
            }
            else if(matriz[i][j] > segundoMaiorValor && matriz[i][j] != maiorValor)
            {
                segundoMaiorValor = matriz[i][j];
            }

            if(matriz[i][j] < menorValor)
            {
                segundoMenorValor = menorValor;
                menorValor = matriz[i][j];
            }
            else if(matriz[i][j] < segundoMenorValor && matriz[i][j] != menorValor)
            {
                segundoMenorValor = matriz[i][j];
            }
        }
    }

    // Imprimindo o segundo maior e o segundo menor valor encontrados
    printf("Segundo maior valor: %d\n", segundoMaiorValor);
    printf("Segundo menor valor: %d\n", segundoMenorValor);

    return 0;
}
