#include<stdio.h>
#include<stdlib.h>

float k, m;

int main(void){

    printf("Converter ms (metros por segundo) em KM/h (quilometros por hora)\n\n");

    printf("Digite o valor que deseja obter em KM/h: ");
    scanf("%f", &m);

    k = m * 3.6;

    printf("\n A velocidade de %.3f ms, convertida em KM/s e %.3f: \n", m, k);

    return (0);
}