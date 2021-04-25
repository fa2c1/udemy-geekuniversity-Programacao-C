#include<stdio.h>
#include<stdlib.h>

float c, f;

int main(){

    printf("Converter Ceusius em Fahrehigt\n\n");
    printf("Digite a temperatura em Ceusius: ");
    scanf("%f", &c);

    f = c * (9.0 / 5.0) + 32;

    printf("\nTemperatura em Ceusius %.1f, temperatura convertida em Fahrehigt %.1f \n", c, f);

    return 0;
}