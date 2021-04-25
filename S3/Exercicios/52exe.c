#include<stdio.h>
#include<stdlib.h>

float vta, vta1, vta2, vta3, vtp, vtp1, vtp2, vtp3, p1, p2, p3, x;

int main(void){

    printf("Divisão de premio:\n");
    printf("Digite o valor do premio:\t\t ");
    scanf("%f", &vtp);
    printf("Digite o valor total das apostas:\t ");
    scanf("%f", &vta);
    printf("Digite a valor do participante 1:\t ");
    scanf("%f", &vta1);
    printf("Digite a valor do participante 2:\t ");
    scanf("%f", &vta2);
    x = vta - (vta1 + vta2);
    printf("Valor apostado do participante 3:\t %.2f\n", x);
    printf("\n");
    
    p1 = (vta1 * 100) / vta;
    vtp1 = (vtp * p1) / 100;

    p2 = (vta2 * 100) / vta;
    vtp2 = (vtp * p2) / 100;

    vtp3 = vtp - (vtp1 + vtp2);

    printf("Valor estimado para cada ganhador:\n\n");
    printf("Participante 1 contrinuiu com R$ %.2f e recebera R4 %.2f\n", vta1, vtp1);
    printf("Participante 2 contrinuiu com R4 %.2f e recebera R$ %.2f\n", vta2, vtp2);
    printf("Participante 3 contrinuiu com R$ %.2f e recebera R$ %.2f\n", x, vtp3);
    printf("\n");

    return (0);
}