#include<stdio.h>
#include<stdlib.h>

int main(void){

    float num;

	printf("Ler um numero real e imprimir\n");

    printf("Digite um nummero: ");
    scanf("%f", &num);

    printf("O nuero digitado foi %.2f\n", num);

    return (0);
}