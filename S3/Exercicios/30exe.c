#include<stdio.h>
#include<stdlib.h>

float x, y, c;

int main(void){

    printf("Converter Real em Dolar\n\n");

    printf("Digite o valor em Reais: ");
    scanf("%f", &x);
    printf("Digite a cotacao do dolar hj: ");
    scanf("%f", &y);

    c = x * y;

    printf("\n %3.f Reais convertidos em Dolas e igual a %2.f Dolar \n", x, c);

    return (0);
}