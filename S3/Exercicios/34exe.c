#include<stdio.h>
#include<stdlib.h>

float r, a, pi = 3.141592;

int main(void){

    printf("Calculando a area de uma circunferencia\n\n");

    printf("Digite o valor em raio: ");
    scanf("%f", &r);

    a = pi * (r * r);

    printf("\n O raio da circunferencia e %3.f sua area e igual a %3.f\n", r, a);

    return (0);
}