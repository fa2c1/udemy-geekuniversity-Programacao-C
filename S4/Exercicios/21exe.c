#include<stdio.h>
#include<stdlib.h>

int n, n1, n2;
float c = 0;

int main(void){

    printf("Escolha uma Opcao\n\n");
    printf("1 Soma de dois numeros\n");
    printf("2 Diferenca entre 2 Numeros\n");
    printf("3 Produto entre 2 Numeros\n");
    printf("4 Divisao entre 2 Numeros\n");
    printf("\n");
    printf("Escolha uma opcao:\t");
    scanf("%d", &n);
    printf("\n");

    switch (n)
    {
    case 1:
        printf("soma de 2 Numeros\n\n");
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        printf("Digite Um Numero:\t");
        scanf("%d", &n2);
        c = n1 + n2;
        printf("\n");
        printf("Resultado: %.0f", c);
        break;
    case 2:
        printf("Diferenca entre dois numeros\n\n");
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        printf("Digite Um Numero:\t");
        scanf("%d", &n2);
        if (n1 > n2)
        {
            c = n1 - n2;
            printf("\n");
            printf("Resultado: %.0f", c);
        }
        else
        {
            c = n2 - n1;
            printf("\n");
            printf("Resultado: %.0f", c);
        }
        break;
    case 3:
        printf("Produto entre 2 Numeros\n\n");
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        printf("Digite Um Numero:\t");
        scanf("%d", &n2);
        c = n1 * n2;
        printf("\n");
        printf("Resultado: %.0f", c);
        break;
    case 4:
        printf("Operacao Dividir\n\n");
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        printf("Digite Um Numero:\t");
        scanf("%d", &n2);
        if (n2 != 0)
        {
            c = n1 / n2;
            printf("\n");
            printf("Resultado: %.2f", c);
        }
        else
        {
            printf("O denominador nao pode ser 0");
        }
        
        break;

    default:
        printf("Opcao Invalida");
        break;
    }

    printf("\n");

    return (0);
}