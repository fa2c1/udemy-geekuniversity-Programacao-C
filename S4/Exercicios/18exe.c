#include<stdio.h>
#include<stdlib.h>

int n, n1, n2;
float c = 0;

int main(void){

    printf("Escolha uma operacao\n\n");
    printf("1 Somar\n");
    printf("2 Subtrair\n");
    printf("3 Multiplicar\n");
    printf("4 Dividir\n");
    printf("\n");
    printf("Escolha uma opcao:\t");
    scanf("%d", &n);
    printf("\n");

    switch (n)
    {
    case 1:
        printf("Operacao somar\n\n");
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        printf("Digite Um Numero:\t");
        scanf("%d", &n2);
        c = n1 + n2;
        printf("\n");
        printf("Resultado: %.0f", c);
        break;
    case 2:
        printf("Operacao Subtrair\n\n");
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        printf("Digite Um Numero:\t");
        scanf("%d", &n2);
        c = n1 - n2;
        printf("\n");
        printf("Resultado: %.0f", c);
        break;
    case 3:
        printf("Operacao Mutiplicar\n\n");
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
        c = n1 / n2;
        printf("\n");
        printf("Resultado: %.2f", c);
        break;

    default:
        printf("Opcao Invalida");
        break;
    }

    printf("\n");

    return (0);
}