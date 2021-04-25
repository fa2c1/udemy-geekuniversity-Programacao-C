#include<stdio.h>
#include<stdlib.h>

float v, r, a, pi = 3.141592;

int main(void){

    printf("Achando a area de um Cilindro\n\n");

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &a);

    v = pi * ((r * r) * a);

    printf("\n O Valor da area do cilindro e %3.f \n", v);

    return (0);
}