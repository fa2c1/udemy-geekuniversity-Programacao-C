#include<stdio.h>
#include<stdlib.h>

float num, resultado;

int main(){

    printf("Leia um numero e imprima a 1/5 dele\n\n");

    printf("Digite um numero: ");
    scanf("%f", &num);

    resultado = num / 5;

    printf("\n1/5 do numero %.2f e: %.2f\n", num, resultado);

    return 0;
}