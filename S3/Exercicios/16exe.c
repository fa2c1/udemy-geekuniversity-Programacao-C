#include<stdio.h>
#include<stdlib.h>

float p, c;

int main(void){

    printf("Converter Polegadas em Centimetros\n\n");

    printf("Digite o valor em Polegadas: ");
    scanf("%f", &p);

    c = p * 2.54;

    printf("\n %3.f polegadas convertidos em centimetros e igual a %3.f cm \n", p, c);

    return (0);
}