#include<stdio.h>
#include<stdlib.h>

float k, l;

int main(void){

    printf("Converter Kilogramas em Libras\n\n");

    printf("Digite o valor em kg: ");
    scanf("%f", &k);

    l = k / 0.35;

    printf("\n %3.f kilos convertidos em libras e igual a %3.f libras \n", k, l);

    return (0);
}