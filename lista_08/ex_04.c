#include <stdio.h>

void converterParaRomano(int numero, char *romano) {
    const char *simbolos[] = {"I", "IV", "V", "IX", "X", "XL", "L"};
    const int valores[] = {1, 4, 5, 9, 10, 40, 50};
    int i = 6;

    romano[0] = '\0';

    while (numero > 0) {
        if (numero >= valores[i]) {
            strcat(romano, simbolos[i]);
            numero -= valores[i];
        } else {
            i--;
        }
    }
}

int main() {
    FILE *arquivo;
    int numero;
    char romano[10];

    // Abre o arquivo para escrita
    arquivo = fopen("numeros_romanos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve os números em algarismos romanos no arquivo
    for (numero = 1; numero <= 50; numero++) {
        converterParaRomano(numero, romano);
        fprintf(arquivo, "%d :: %s\n", numero, romano);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Números romanos gravados no arquivo 'numeros_romanos.txt'.\n");

    return 0;
}
