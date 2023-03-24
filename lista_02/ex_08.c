#include <stdio.h>

#define SEGUNDOS_POR_MINUTO 60

int main() {
    float tamanho_arquivo, velocidade_internet, tempo_download;
    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &tamanho_arquivo);
    printf("Digite a velocidade da internet em Mbps: ");
    scanf("%f", &velocidade_internet);
    tempo_download = (tamanho_arquivo * 8) / (velocidade_internet * 1024);
    printf("Tempo aproximado de download: %.2f minutos\n", tempo_download / SEGUNDOS_POR_MINUTO);
    return 0;
}