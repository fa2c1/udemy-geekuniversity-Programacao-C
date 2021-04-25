#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nContagem de 1000 em 1000 até 10000\n");
    printf("\n");

    int n = 1000;

    for (int i = 0; i < 99; i++)
    {
        n = n + 1000;
        printf("Contagem de 1000 em 1000: %d\n", n);
    }    

    printf("\n");
    return (0);

}
