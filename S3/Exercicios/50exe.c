#include<stdio.h>
#include<stdlib.h>

int i, a, r;

int main(void){

    printf("Descobrir o ano que nasceu\n");
    printf("Digite sua idade: ");
    scanf("%d", &i);
    printf("Digite o ano atual: ");
    scanf("%d", &a);

    r = a - i;

    printf("Voce nasceu no ano de %d ", r);
    printf("\n");

    return (0);
}