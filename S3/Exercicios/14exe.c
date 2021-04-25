#include<stdio.h>
#include<stdlib.h>

float g, r;

int main(void){

    printf("Converter Angulo de graus em Radianos\n\n");

    printf("Digite o valor do Angulo de Graus: ");
    scanf("%f", &g);

    r = g * 3.14 / 180;

    printf("\n %.3f angulos de graus convertidos, e igual a %.3f em radianos\n", g, r);

    return (0);
}