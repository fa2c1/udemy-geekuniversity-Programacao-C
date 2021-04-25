#include<stdio.h>
#include<stdlib.h>

float altura, altura_degral, qtd_degraus;

int main(void){

    printf("Subir qntos degraus\n\n");

    printf("Altura do degral: ");
    scanf("%f", &altura_degral);
    printf("Altura que deseja subir: ");
    scanf("%f", &altura);

    qtd_degraus = altura / altura_degral;

    printf("\n Voce deve subir %.0f Degraus \n", qtd_degraus);

    return (0);
}