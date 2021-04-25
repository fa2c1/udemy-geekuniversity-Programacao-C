#include<stdio.h>
#include<stdlib.h>

int n, s = 0;

int main(){

    printf("Fragmentando e somando numero digitado\n\n");
    printf("Digite um numero:\t");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 == 0)
    {
        while (n != 0) {
            s  += n % 10;
            n  = n / 10;
        }
        printf("A soma do numero digitado e %d e: ", s);
    }
    else
    {
        printf("Numero invalido");
    }

    printf("\n");
    
    return 0;
}