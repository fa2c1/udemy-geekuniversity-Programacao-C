#include<stdio.h>
#include<stdlib.h>

float n1, n2, n3, n4, m;

int main(void){

    printf("Calculo de Media\n\n");

    printf("Digite a Nota 1: ");
    scanf("%f", &n1);
    printf("Digite a Nota 2: ");
    scanf("%f", &n2);
    printf("Digite a Nota 3: ");
    scanf("%f", &n3);
    printf("Digite a Nota 4: ");
    scanf("%f", &n4);

    m = (n1 + n2 + n3 + n4) / 4;

    printf("\n A Media das 4 notas e %2.f \n", m);

    return (0);
}