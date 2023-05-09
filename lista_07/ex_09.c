#include <stdio.h>

int main() {
    int n, i;
    int fib[100];

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("Sequencia de Fibonacci ate o %d-esimo termo:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}
