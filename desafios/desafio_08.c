#include <stdio.h>
#include <math.h>

// Função de ativação degrau
int degrau(double x) {
    if (x >= 0) {
        return 1;
    } else {
        return 0;
    }
}

// Função de ativação logística (sigmoide)
double sigmoide(double x) {
    return 1.0 / (1.0 + exp(-x));
}

// Função de ativação tangente hiperbólica
double tangente_hiperbolica(double x) {
    return tanh(x);
}

// Função de ativação sigmoide linear
double sigmoide_linear(double x) {
    if (x >= 0) {
        return x;
    } else {
        return 0.01 * x;  // Coeficiente de inclinação
    }
}

// Função de ativação gaussiana
double gaussiana(double x) {
    return exp(-(x * x));
}

int main() {
    double x = 1.5;
    int result_degrau;
    double result_sigmoide, result_tangente_hiperbolica, result_sigmoide_linear, result_gaussiana;

    // Testando as funções de ativação
    result_degrau = degrau(x);
    printf("Função degrau(%lf) = %d\n", x, result_degrau);

    result_sigmoide = sigmoide(x);
    printf("Função sigmoide(%lf) = %lf\n", x, result_sigmoide);

    result_tangente_hiperbolica = tangente_hiperbolica(x);
    printf("Função tangente hiperbólica(%lf) = %lf\n", x, result_tangente_hiperbolica);

    result_sigmoide_linear = sigmoide_linear(x);
    printf("Função sigmoide linear(%lf) = %lf\n", x, result_sigmoide_linear);

    result_gaussiana = gaussiana(x);
    printf("Função gaussiana(%lf) = %lf\n", x, result_gaussiana);

    return 0;
}
