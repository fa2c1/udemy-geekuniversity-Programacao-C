#include<stdio.h>
#include<stdlib.h>

float m2, h;

int main(void){

    printf("Converter Metros Quadrados em Hectares\n\n");

    printf("Digite o valor em Metos Quadrados: ");
    scanf("%f", &m2);

    h = m2 * 0.0001;

    printf("\n %3.f Metros Quadrados convertidos em Hectares e igual a %3.f Hectares \n", m2, h);

    return (0);
}