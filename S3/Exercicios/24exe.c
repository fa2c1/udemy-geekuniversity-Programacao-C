#include<stdio.h>
#include<stdlib.h>

float m2, a;

int main(void){

    printf("Converter Metros Quadrados em Acres\n\n");

    printf("Digite o valor em Metros Quadrados: ");
    scanf("%f", &m2);

    a = m2 * 0.000247;

    printf("\n %3.f Metros Quadrados convertidos em Acres e igual a %3.f Acres \n", m2, a);

    return (0);
}