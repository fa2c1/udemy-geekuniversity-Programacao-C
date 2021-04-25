#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nSequencia de 1 até 100 usando o For, While e Do While\n");
    printf("\n");

    int nf = 1, nw = 1, ndw = 1;

    for (int i = 0; i < 99; i++)
    {
        nf = nf + 1;
        printf("Usando For: %d\n", nf);
    }    

    printf("\n");
       
    while (nw < 100)
    {
        nw = nw + 1;
        printf("Usando While: %d\n", nw);
    }    

    printf("\n");

    do
    {
        ndw = ndw + 1;
        printf("Usando o Do While: %d\n", ndw);
    } while (ndw < 100);    

    printf("\n");
    return (0);

}
