#include<stdio.h>
#include<stdlib.h>

float x, y;

int main(void){

    printf("Achar Metros Quadrados\n\n");

    printf("Digite o valor em x: ");
    scanf("%f", &x);

    y = x * x;

    printf("\n O calculo de %3.f metros convertidos em metros quadrado e igual a %3.f m2 \n", x, y);

    return (0);
}