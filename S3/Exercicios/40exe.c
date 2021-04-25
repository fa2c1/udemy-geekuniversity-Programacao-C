#include<stdio.h>
#include<stdlib.h>

float sb, sl, dt, vr_desc, pd = 30.00, desc = 8.00;

int main(void){

    printf("Calculo de salario baseado em dias Trabalhados\n\n");

    printf("Dias trabalhados:\t");
    scanf("%f", &dt);
    
    sb = dt * pd;
    sl = sb - ((sb * desc) / 100);
    vr_desc = sb - sl;

    printf("\nResumo do salario\n\n");
    printf("Valor do Dia: %.2f\n", pd);
    printf("Dias Trabalhados: %.2f\n", dt);
    printf("Salario Bruto: %.2f\n", sb);
    printf("Desconto INSS: %.2f\n\n", vr_desc);
    printf("Salario Liquido: %.2f\n", sl);

    return (0);
}