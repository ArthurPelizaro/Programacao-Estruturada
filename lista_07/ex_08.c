#include <stdio.h>

double fatorial(int num) {
    int i;
    double fat = 1;

    for (i = 1; i <= num; i++) {
        fat *= i;
    }

    return fat;
}

int main() {
    int n;
    double e = 1;

    for (n = 1; n <= 20; n++) {
        e += 1 / fatorial(n);
        printf("n = %d, e = %.10lf\n", n, e);
    }

    return 0;
}
