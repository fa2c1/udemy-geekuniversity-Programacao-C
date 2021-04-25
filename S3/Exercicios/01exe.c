#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num;

    printf("Ler um numero inteiro e imprimir\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO numero digitado foi %d\n", num);

    printf("\n");
    system ("pause");

    return (0);
}