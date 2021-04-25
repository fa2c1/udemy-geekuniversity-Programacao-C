#include<stdio.h>
#include<stdlib.h>

float m2, h;

int main(void){

    printf("Converter Hectares em Metros Quadrados\n\n");

    printf("Digite o valor em Hectares: ");
    scanf("%f", &h);

    m2 = h * 10000;

    printf("\n %3.f Hectares convertidos em Metros Quadrados e igual a %3.f Metros Quadrados \n", h, m2);

    return (0);
}