#include<stdio.h>
#include<stdlib.h>

float l, m3;

int main(void){

    printf("Converter Metros Cubicos em Litros\n\n");

    printf("Digite o volume em Metros Cubicos: ");
    scanf("%f", &m3);

    l= 1000 * m3;

    printf("\n O volume de %3.f metros cubicos convertidos em litros e igual a %3.f litros \n", m3, l);

    return (0);
}