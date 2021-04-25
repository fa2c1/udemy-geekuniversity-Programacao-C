#include<stdio.h>
#include<stdlib.h>

int n, h, m, s;

int main(void){

    printf("Ler um valor em segundos e converter\n\n");

    printf("Digite o valor em segundos: ");
    scanf("%d", n);

    s = n % 60;
    m = (n % 3600) / 60;
    h = n / 3600;

    printf("Segundos convertidos: %d:%d:%d", h, m, s);

    return (0);
}
