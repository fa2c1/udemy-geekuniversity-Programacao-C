#include<stdio.h>
#include<stdlib.h>

float l, m3;

int main(void){

    printf("Converter Litros em Metros Cubicos\n\n");

    printf("Digite o volume em Litros: ");
    scanf("%f", &l);

    m3 = l / 1000;

    printf("\n O volume de %3.f litros convertidos em metros cubicos e igual a %3.f metros cubicos \n", l, m3);

    return (0);
}