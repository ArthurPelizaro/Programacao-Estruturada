#include <stdio.h>

int main(){
    
    float distanciaInicial;
    float velocidadeLuz = 299792458;

    printf("\n");
    printf("informe a distância entre os dois planetas: ");
    scanf("%f", &distanciaInicial);
    
    float luzKmSegundo = velocidadeLuz / 1000;
    float velocidadeLuzKmh = luzKmSegundo * 3600;

    float distenciaHoras = distanciaInicial/veloLuzKmh;
    float distanciaMinutos = distenciaHoras * 60;
    float distanciaSegundos = distanciaMinutos * 60;
    printf("Tempo médio entre os dois planetas em segundos: %.17f \n", distanciaSegundos);
    printf("Tempo médio entre os dois planetas em minutos: %.17f \n", distanciaMinutos);
    printf("Tempo médio entre os dois planetas em horas : %.17f \n", distenciaHoras );
    





}