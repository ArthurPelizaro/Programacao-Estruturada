#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // inicializa a semente do gerador de números aleatórios com o valor atual do relógio
    srand(time(NULL));
    
    int num1, num2, num3;
    
    // gera números aleatórios até que três números divisíveis por 5 sejam gerados
    do {
        num1 = rand() % 900 + 100;
    } while (num1 % 5 != 0);
    
    do {
        num2 = rand() % 900 + 100;
    } while (num2 % 5 != 0);
    
    do {
        num3 = rand() % 900 + 100;
    } while (num3 % 5 != 0);
    
    printf("%d %d %d\n", num1, num2, num3); // imprime os três números gerados separados por espaço
    
    return 0;
}
