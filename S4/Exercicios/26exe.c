#include<stdio.h>
#include<stdlib.h>

float km, lts, kml; 

int main(void){

    printf("Consumo de combustivel\n\n");
    printf("Km Percorrido:\t");
    scanf("%f", &km);
    printf("Consumo Litros:\t");
    scanf("%f", &lts);
    printf("\n");

    kml = km / lts;

    if (kml < 8)
    {
        printf("Venda o caro pois ele e nada economico");
    }
    else if (kml >= 8 || kml < 12)
    {
        printf("Carro economico");
    }
    else
    {
        printf("carro super economico");
    }
    
    printf("\n");

    return (0);
}