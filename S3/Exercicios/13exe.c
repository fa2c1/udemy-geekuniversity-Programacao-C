#include<stdio.h>
#include<stdlib.h>

float m, k;

int main(void){

    printf("Converter KM em Milhas\n\n");

    printf("Digite o valor em KM: ");
    scanf("%f", &k);

    m = k / 1.61;

    printf("\n %.3f Kilometros convertidos e igual a %.3f Milhas\n", k, m);

    return (0);
}