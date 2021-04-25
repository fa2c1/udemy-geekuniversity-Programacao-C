#include<stdio.h>
#include<stdlib.h>

float j, m;

int main(void){

    printf("Converter Netros em Jardas\n\n");

    printf("Digite o valor em Metros: ");
    scanf("%f", &m);

    j = m / 0.91;

    printf("\n %3.f Metros convertidos em Jardas e igual a %3.f Jardas \n", m, j);

    return (0);
}