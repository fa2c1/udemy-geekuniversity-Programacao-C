#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nImprimindo de 100 a 999\n");
    printf("\n");

    for (int i = 100; i < 1000; i++)
    {
        i = i + 1;
        printf("\nContador %d ", i);
    }

    printf("\n");
    return (0);

}
