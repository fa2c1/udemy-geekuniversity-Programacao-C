#include<stdio.h>
#include<stdlib.h>

float c, k;

int main(){

    printf("Converter Ceusius em Keuvin\n\n");
    printf("Digite a temperatura em Ceusius: ");
    scanf("%f", &c);

   k = c + 273.15;

    printf("\nTemperatura em Ceusius %.1f, temperatura convertida em Fahrehigt %.1f \n", c, k);

    return 0;
}