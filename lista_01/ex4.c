#include <stdio.h>

int main(){
    int numero;
    int numero2;

    printf("\n");
    printf("Digite um número inteiro.");
    scanf("%d", &numero);
    printf("\n");
    
    printf("Digite um outro número inteiro.");
    scanf("%d", &numero2 );
    printf("\n");

    int soma = numero + numero2;
    int subtracao = numero - numero2;
    int multi = numero * numero2;

    printf("%d + %d = %d\n", numero, numero2, soma);
    printf("%d - %d = %d\n", numero, numero2, subtracao);
    printf("%d * %d = %d\n", numero, numero2, multi);

    return 0;
}