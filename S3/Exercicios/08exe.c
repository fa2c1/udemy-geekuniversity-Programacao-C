#include<stdio.h>
#include<stdlib.h>

float c, k;

int main(){

    printf("Converter Keuvin em Ceucius\n\n");
    printf("Digite a temperatura em Keuvin: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("\nTemperatura em Keuvin %.1f, temperatura convertida em Ceusius %.1f \n", k, c);

    return 0;
}