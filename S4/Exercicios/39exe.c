#include<stdio.h>
#include<stdlib.h>

int main(void){

    float sa, bs, sb;
    int at;

    printf("\nTabela de almento Salarial\n");
    printf("\n");

    printf("Digite o valor do salario atual: ");
    scanf("%f", &sa);
    printf("Quantidade de anos trabalhados: ");
    scanf("%d", &at);
    printf("\n");

    if (sa <= 500)
    {
        if (at <= 1)
        {
            sb = sa + (sa * 0.25);
            bs = sb;
            printf("Valor do Salario Com Aumento: R$ %.2f", bs);
            printf("\n");
        }
    }
    else if (sa <= 1000)
    {
        if (at <= 3 && at > 1)
        {
            sb = sa + (sa * 0.20);
            bs = sb + 100;
            printf("Valor do Salario Com Aumento: R$ %.2f", bs);
            printf("\n");
        }
    }
    else if (sa <= 1500)
    {
        if (at <= 6 && at > 3)
        {
            sb = sa + (sa * 0.15);
            bs = sb + 200;
            printf("Valor do Salario Com Aumento: R$ %.2f", bs);
            printf("\n");
        }
    }
    else if (sa <= 2000)
    {
        if (at <= 10 && at > 6)
        {
            sb = sa + (sa * 0.10);
            bs = sb + 300;
            printf("Valor do Salario Com Aumento: R$ %.2f", bs);
            printf("\n");
        }
    }
    else
    {
        bs = sa + 500;
        printf("Valor do Salario Com Aumento: R$ %.2f", bs);
        printf("\n\n");
    }    

    return (0);
}