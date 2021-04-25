#include<stdio.h>
#include<stdlib.h>

float c, f;

int main(){

    printf("Converter Fahrehigt em Ceusius \n\n");
    printf("Digite a temperatura em Fahrehigt: ");
    scanf("%f", &f);

    c = 50 - (f - 32) / 9.0;

    printf("\nTemperatura em Fahrehigt %.1f, temperatura convertida em Ceusius %.1f \n", f, c);

    return 0;
}