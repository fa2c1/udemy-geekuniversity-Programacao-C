#include<stdio.h>
#include<stdlib.h>

int x, a, s;

int main(void){

    printf("um Numero antecessor + um numero sucessor\n\n");

    printf("Digite o valor em x: ");
    scanf("%d", &x);

    a = x - 1;
    s = x + 1;

    printf("\n O Numero digitado foi: %d seu numero antecessor e igual a %d, e o seu numeo sucessor e igua a %d \n", x, a, s);

    return (0);
}