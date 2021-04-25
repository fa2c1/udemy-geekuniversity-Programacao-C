#include<stdio.h>
#include<stdlib.h>

int main(void){

    float v, r;

    printf("\nVendas e Comições\n");
    printf("\n");

    printf("Digite o valor da venda: ");
    scanf("%f", &v);

    if (v >= 100000)
    {
        r = 700 + (v * 0.16);
        printf("Valor da comição da venda: R$ %.2f", r);
        printf("\n");
    }
    else if (v < 100000 && v >= 80000)
    {
        r = 650 + (v * 0.14);
        printf("Valor da comição da venda: R$ %.2f", r);
        printf("\n");
    }
    else if (v < 80000 && v >= 60000)
    {
        r = 600 + (v * 0.14);
        printf("Valor da comição da venda: R$ %.2f", r);
        printf("\n");
    }
    else if (v < 600000 && v >= 40000)
    {
        r = 550 + (v * 0.14);
        printf("Valor da comição da venda: R$ %.2f", r);
        printf("\n");
    }
    else if (v < 400000 && v >= 20000)
    {
        r = 500 + (v * 0.14);
        printf("Valor da comição da venda: R$ %.2f", r);
        printf("\n");
    }
    else
    {
        r = 450 + (v * 0.14);
        printf("Valor da comição da venda: R$ %.2f", r);
        printf("\n");
    }
    
    printf("\n");
    return (0);
}