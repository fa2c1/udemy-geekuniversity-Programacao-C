#include<stdio.h>
#include<stdlib.h>

float num, resultado;

int main(){

    printf("Retorne o quadrado do numero\n\n");

    printf("Digite um numero: ");
    scanf("%f", &num);

    resultado = num * 2;

    printf("\nO quadrado de %.2f e: %.2f\n", num, resultado);

    return 0;
}