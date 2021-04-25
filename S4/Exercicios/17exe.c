#include<stdio.h>
#include<stdlib.h>

int area, bmenor, bmaior, altura;

int main(void){

    printf("Calcular a area de um Trapesio\n\n");
    printf("Altura:\t\t");
    scanf("%d", &altura);
    printf("Base Maior:\t");
    scanf("%d", &bmaior);
    printf("Base Menor:\t");
    scanf("%d", &bmenor);
    printf("\n");    

    if (altura > 0 && bmaior > 0 && bmenor > 0)
    {
        area = ((bmaior + bmenor) * altura) / 2;
        printf("A area do Trapesio e %d", area);
    }
    else
    {
        printf("Os numeros digitados sao invalidos");
    }
    
    printf("\n");

    return (0);
}