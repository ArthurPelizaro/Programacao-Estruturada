#include <stdio.h>

int main() {
    float valor_hora, horas_mes, salario_bruto, ir, inss, sindicato, salario_liquido;
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_mes);
    salario_bruto = valor_hora * horas_mes;
    ir = 0.11 * salario_bruto;
    inss = 0.08 * salario_bruto;
    sindicato = 0.05 * salario_bruto;
    salario_liquido = salario_bruto - ir - inss - sindicato;
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Descontos:\n");
    printf("- IR (11%%): R$ %.2f\n", ir);
    printf("- INSS (8%%): R$ %.2f\n", inss);
    printf("- Sindicato (5%%): R$ %.2f\n", sindicato);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    return 0;
}