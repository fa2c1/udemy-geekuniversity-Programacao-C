#include<stdio.h>
#include<stdlib.h>

float m, k;

int main(void){

    printf("Converter Milhas em KM\n\n");

    printf("Digite o valor em Milhas: ");
    scanf("%f", &m);

    k = 1.61 * m;

    printf("\n %.3f Milhas convertidos e igual a %.3f Kilometros\n", m, k);

    return (0);
}