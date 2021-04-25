#include<stdio.h>
#include<stdlib.h>

float m2, a;

int main(void){

    printf("Converter Acres em Metros Quadrados\n\n");

    printf("Digite o valor em Acres: ");
    scanf("%f", &a);

    m2 = a * 1048.58;

    printf("\n %3.f Acres convertidos em Metros Quadrados e igual a %3.f Metros Quadrados \n", a, m2);

    return (0);
}