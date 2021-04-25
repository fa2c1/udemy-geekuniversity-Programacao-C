#include<stdio.h>
#include<stdlib.h>

float num1, num2, num3, soma, q;

int main(void){

    printf("some 3 valores e apresente o quadrado do resultado\n\n");

    printf("Digite o valor 1: ");
    scanf("%f", &num1);
    printf("Digite o valor 2: ");
    scanf("%f", &num2);
    printf("Digite o valor 3: ");
    scanf("%f", &num3);

    soma = num1 + num2 + num3;
    q = soma * 2;

    printf("\n A soma dos 3 valoes e %3.f o quadrado da soma e %3.f\n", soma, q);

    return (0);
}