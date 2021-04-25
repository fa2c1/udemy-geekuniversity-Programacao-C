#include<stdio.h>
#include<stdlib.h>

float total, vr_pagar, desconto, vr_parcelas, comissao;

int main(void){

    printf("Calcule vendas\n\n");

    printf("Digite o valor da venda: ");
    scanf("%f", &total);

    vr_pagar = total - ((total * 10) / 100);
    vr_parcelas = total /3;
    comissao = ((vr_pagar * 5) / 100);

    printf("\n Valor a vista: %.2f: ", vr_pagar);
    printf("\n 3 Vezes de %.2f: ", vr_parcelas);
    printf("\n Comissao Venda a vista %.2f: \n", comissao);

    return (0);
}