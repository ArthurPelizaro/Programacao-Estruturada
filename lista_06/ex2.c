#include <stdio.h>

int main()
{
    // Definindo a matriz
    int matriz[6][6] = {0};

    // Imprimindo a matriz inicial
    printf("Matriz inicial:\n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Preenchendo a diagonal principal com 1
    for(int i = 0; i < 6; i++)
    {
        matriz[i][i] = 1;
    }

    // Imprimindo a matriz com a diagonal principal preenchida
    printf("Matriz com diagonal principal preenchida:\n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
