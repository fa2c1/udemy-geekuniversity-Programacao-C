#include<stdio.h>
#include<stdlib.h>

float j, m;

int main(void){

    printf("Converter Jardas em Metros\n\n");

    printf("Digite o valor em Jardas: ");
    scanf("%f", &j);

    m = 0.91 * j;

    printf("\n %3.f jardas convertidos em Metros e igual a %3.f Metros \n", j, m);

    return (0);
}