#include<stdio.h>
#include<stdlib.h>

float p, c;

int main(void){

    printf("Converter Centimetros em Polegadas\n\n");

    printf("Digite o valor em Centimetros: ");
    scanf("%f", &c);

    p = c / 2.54;

    printf("\n %3.f centimetros convertidos em polegadas e igual a %3.f''  \n", c, p);

    return (0);
}