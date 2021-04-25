#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float a, b, h;

int main(void){

    printf("Achandao a Hipotemusa de um Triangulo\n\n");

    printf("Digite o valor em lado a: ");
    scanf("%f", &a);
    printf("Digite o valor em lado b: ");
    scanf("%f", &b);

    h = sqrt((a * a) + (b * b));

    printf("\n O Valor da Hipotemusa e igual a %3.f x \n", h);

    return (0);
}