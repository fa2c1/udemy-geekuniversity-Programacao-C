#include<stdio.h>
#include<stdlib.h>

float mg = 0.07, sp = 0.12, rj = 0.15, ms = 0.08;
float pdt, vr_f;
char estd[3];  

int main(void){

    printf("Calculo de imposto interstadual\n\n");
    printf("Digite o estado:\t");
    scanf("%s", &estd);
    printf("Valor Produto:\t\t");
    scanf("%f", &pdt);
    printf("\n");

    switch (tolower(estd))
    {
    case 'mg':
        vr_f = pdt * mg + pdt;
        printf("Valor Final: %2.f", vr_f);
        break;

    case 'sp':
        vr_f = pdt * sp + pdt;
        printf("Valor Final: %2.f", vr_f);
        break;

    case 'rj':
        vr_f = pdt * rj + pdt;
        printf("Valor Final: %2.f", vr_f);
        break;
    
    case 'ms':
        vr_f = pdt * ms + pdt;
        printf("Valor Final: %2.f", vr_f);
        break;
    
    default:
        printf("Estado invalido!\n");
        printf("Estados validos:\n");
        printf("MG SP RJ MS ");
        break;
    }

    printf("\n");

    return (0);
}