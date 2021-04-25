#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nContagem regressiva de 10 até 0\n");
    printf("\n");

    int n = 10;

    while (n >= 0)
    {
        printf("Contagem regressiva: %d\n", n);
        n = n - 1;
    }
    
    printf("\nFim da Contagem Regressiva...\n");

    printf("\n");
    return (0);

}
