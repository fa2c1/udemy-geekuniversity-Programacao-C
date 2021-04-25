#include<stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2, num3, soma;

    printf("Soma de tres valores inteiros\n\n");
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero ");
    scanf("%d", &num2);
    printf("Digite o ulltimo numero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("\nOs numeros digitados foram %d, %d, %d\n", num1, num2, num3);
    printf("\nA soma dos numeros digitados e: %d\n", soma);

    return 0;
}