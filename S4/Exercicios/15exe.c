#include<stdio.h>
#include<stdlib.h>

int n;

int main(){

    printf("Dias da semana\n\n");
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &n);
    printf("\n");

    switch (n)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
       printf("Segunda Feira");
       break;
    case 3:
        printf("Terca-Feira");
        break;
    case 4:
        printf("Quarta Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sabado");
        break;
    
    default:
        printf("Digite um numero valido!");
        break;
    }

    printf("\n");

    return 0;
}