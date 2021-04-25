#include<stdio.h>
#include<stdlib.h>

float n1, n2, m;

int main(){

    printf("Cauculo de medias\n\n");
    
    printf("Digite a Nota 1: ");
    scanf("%f", &n1);
    printf("Digite a Nota 2: ");
    scanf("%f", &n2);

    printf("\n");

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
    {
        printf("Nota invalida!");
    }
    else
    {
        m = (n1 + n2) / 2;
        printf("Media: %2.f", m);
    }

    printf("\n");
    
    return 0;
}