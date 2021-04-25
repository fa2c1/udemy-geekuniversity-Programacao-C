#include<stdio.h>
#include<stdlib.h>

float g, r;

int main(void){

    printf("Converter Angulo de Radianos em Graus\n\n");

    printf("Digite o valor do Angulo de Radianos: ");
    scanf("%f", &r);

    g = r * 180 / 3.14;

    printf("\n %.3f angulos de radianos convertidos, e igual a %.3f em graus\n", r, g);

    return (0);
}