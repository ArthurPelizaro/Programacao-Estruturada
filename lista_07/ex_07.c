#include <stdio.h>

int fatorial(int num) {
    int i, fat = 1;

    for (i = 1; i <= num; i++) {
        fat *= i;
    }

    return fat;
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, fatorial(num));

    return 0;
}
