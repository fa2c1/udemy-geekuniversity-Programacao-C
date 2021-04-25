#include<stdio.h>
#include<stdlib.h>

float v, d, l;

int main(void){

    printf("Calculo de desconto\n\n");

    printf("Digite o valor do produto: ");
    scanf("%f", &v);
    printf("Digite o valor do desconto: ");
    scanf("%f", &d);
    
    l = v - (v / d);

    printf("\n Valor do produto R$ %2.f com desconto de %2.f%% e igual a R$ %.2f \n", v, d, l);

    return (0);
}