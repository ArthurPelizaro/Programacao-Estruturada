#include <stdio.h>

int main(){
    float metros;
    float km;

    printf("Digite a distância entre dois pontos em metros:");
    scanf("%f", &metros);
    printf("\n");
    km = metros / 1000;
    printf("A distância entre os dois pontos é de: %0.2f KM\n ", km);

    return 0;
}