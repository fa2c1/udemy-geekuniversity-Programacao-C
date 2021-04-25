#include<stdio.h>
#include<stdlib.h>

float k, m;

int main(void){

    printf("Converter KM/h (quilometros por hora) em ms (metros por segundo)\n\n");

    printf("Digite o valor que deseja obter em ms: ");
    scanf("%f", &k);

    m = k / 3.6;

    printf("\n A velocidade de %.3f KM/h, convertida em m/s e %.3f: \n", k, m);

    return (0);
}