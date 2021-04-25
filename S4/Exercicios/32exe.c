#include<stdio.h>
#include<stdlib.h>

int cod, qtd = 0;
float vrt = 0;

int main(void){

    printf("Calcula o Total\n");
    printf("\n");

    printf("Tabela de Preco\n");
    printf("-----------------------------------\n");
    printf("Especificacao\tCodigo\tValor\n");
    printf("-----------------------------------\n");
    printf("Cachorro Quente\t100\t1.20\n");
    printf("Bauru Simples\t101\t1.30\n");
    printf("Bauru com Ovo\t102\t1.50\n");
    printf("Hamburguer\t103\t2.20\n");
    printf("Cheasesburguer\t104\t1.70\n");
    printf("Suco\t\t105\t2.20\n");
    printf("Refrigerante\t106\t1.70\n");
    printf("-----------------------------------\n");
    printf("\n");

    printf("Digite o Codigo: ");
    scanf("%d", &cod);
    printf("Quantidade: ");
    scanf("%d", &qtd);
    printf("\n");

    switch (cod)
    {
    case 100:
        vrt = qtd * 1.20;
        break;

    case 101:
        vrt = qtd * 1.30;
        break;
    
    case 102:
        vrt = qtd * 1.50;
        break;
    
    case 103:
        vrt = qtd * 2.20;
        break;

    case 104:
        vrt = qtd * 1.70;
        break;

    case 105:
        vrt = qtd * 2.20;
        break;

    case 106:
        vrt = qtd * 1.70;
        break;
    
    default:
        break;
    }

    printf("Valor Total: %.2f", vrt);

    return (0);
}