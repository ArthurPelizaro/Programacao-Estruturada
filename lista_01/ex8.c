#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número inteiro:");
    scanf("%d", &numero);
    printf("\n");

    int inicio = numero-;
    int tamanho = *2 +1;
    int v[tamanho];

    printf("o números são: ");
    int i = 0;
   
    for ( i = 0; i < tamanho ; i++){
        if (i != tamanho -1){
            v[i] = inicio;
            printf("%d, ", v[i]);
            inicio = inicio+1;
            }else{
                v[i] = inicio;
                printf("%d. ", v[i]);
                printf("\n \n");
                }
        }
    
    printf("Sequencias e anteriores:  %d,  %d,  %d,  %d,  %d. \n", numero-2, numero-1, numero, numero+1, numero+2);
    return 0;

}