#include<stdio.h>
#include<stdlib.h>

float c, l, pt, x;

int main(void){

    printf("Orcamento de cerca a tela\n\n");
    printf("Digite a largura do terreno: ");
    scanf("%f", &l);
    printf("Digete o comprimento do terreno: ");
    scanf("%f", &c);
    printf("Digite o preco do metro da tela: ");
    scanf("%f", &pt);
    printf("\n");

    x = (l + l + c + c) * pt;

    printf("O valor do orcamento fica em R$ %.2f", x);
    printf("\n");

    return (0);
}