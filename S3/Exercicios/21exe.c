#include<stdio.h>
#include<stdlib.h>

float k, l;

int main(void){

    printf("Converter Libras em Kilogramas\n\n");

    printf("Digite o valor em Libras: ");
    scanf("%f", &l);

    k = l * 0.35;

    printf("\n %3.f libras convertidos em kilos e igual a %3.f kilos \n", l, k);

    return (0);
}