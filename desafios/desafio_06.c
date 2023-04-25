#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y;

    // Lendo o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    // Alocando memória para o array
    int *arr = (int*)malloc(n * sizeof(int));

    // Lendo o array
    printf("Digite os elementos do array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Lendo os valores de X e Y
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    // Alocando memória para o sub-array
    int *sub_arr = (int*)malloc((y - x + 1) * sizeof(int));

    // Copiando os elementos do sub-array para o array de saída
    for(int i = 0; i < y - x + 1; i++)
    {
        sub_arr[i] = arr[x + i];
    }

    // Imprimindo o sub-array
    printf("Sub-array: ");
    for(int i = 0; i < y - x + 1; i++)
    {
        printf("%d ", sub_arr[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(arr);
    free(sub_arr);

    return 0;
}
