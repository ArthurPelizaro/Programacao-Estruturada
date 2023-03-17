#include <stdio.h>


int main(){
    int numero;
    printf("\n");
    printf("Digite um número inteiro.");
    scanf("%d", &numero);
    printf("\n");

    int dobro = numero*2;
    int triplo = numero*3;

    printf("Número Digitado: %d.\n", numero);
    printf("O dobro do %d é: %d.\n", numero, dobro);
    printf("O triplo do %d é: %d.\n", numero, triplo);

    return 0;
}