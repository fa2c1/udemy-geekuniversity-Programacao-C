#include<stdio.h>
#include<stdlib.h>

float sb, sl, vr_hora, qtd_horas, extras;

int main(void){

    printf("Calculo de salario por hora\n\n");

    printf("Horas trabalhados:\t");
    scanf("%f", &qtd_horas);
    printf("Valor da hora:\t\t");
    scanf("%f", &vr_hora);
    
    sb = qtd_horas * vr_hora;
    sl = sb + ((sb * 10) / 100);
    extras = sl - sb;

    printf("\nResumo do salario\n\n");
    printf("Valor da Hora: %.2f\n", vr_hora);
    printf("Horas Trabalhados: %.2f\n", qtd_horas);
    printf("Salario Bruto: %.2f\n", sb);
    printf("Acressimo Bonos: %.2f\n\n", extras);
    printf("Salario Liquido: %.2f\n", sl);

    return (0);
}