#include<stdio.h>
#include<stdlib.h>

int x, a, s;

int main(void){

    printf("um Numero antecessor + um numero sucessor somados e mutiplicados\n\n");

    printf("Digite o valor em x: ");
    scanf("%d", &x);

    a = ((x - 1) + x) * 2;
    s = ((x + 1) + x) * 3;

    printf("\n O Numero digitado foi: %d mais a soma do sucessor mutiplicado por 3 e igua a %d", x, s);
    printf("\n O Numero digitado foi: %d mais a soma do antecessor mutiplicado por 2 e igua a %d \n", x, a);

    return (0);
}