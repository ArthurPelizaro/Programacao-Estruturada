#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Semente para o gerador de números aleatórios
    srand(time(NULL));
    
    int dia, mes, ano;
    
    do {
        // Gerando um ano aleatório entre 2000 e 2022
        ano = rand() % 23 + 2000;
        
        // Verificando se o ano é bissexto
        int bissexto = 0;
        if (ano % 4 == 0) {
            if (ano % 100 == 0) {
                if (ano % 400 == 0) {
                    bissexto = 1;
                }
            } else {
                bissexto = 1;
            }
        }
        
        // Gerando um mês aleatório entre 1 e 12
        mes = rand() % 12 + 1;
        
        // Verificando o número de dias do mês gerado
        int dias_mes;
        switch (mes) {
            case 2:
                dias_mes = bissexto ? 29 : 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias_mes = 30;
                break;
            default:
                dias_mes = 31;
                break;
        }
        
        // Gerando um dia aleatório dentro do número de dias do mês gerado
        dia = rand() % dias_mes + 1;
    } while (ano == 2023 || (ano == 2022 && mes > 12) || (ano == 2000 && mes < 1) || (ano == 2022 && mes == 12 && dia > 31));
    
    printf("%02d/%02d/%d\n", dia, mes, ano);
    
    return 0;
}
