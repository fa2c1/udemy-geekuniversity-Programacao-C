#include<stdio.h>
#include<stdlib.h>

float a, p;
char s;

int main(){

    printf("Calculo de IMC\n\n");
    printf("Altura:\t");
    scanf("%f", &a);
    printf("Sexo:\t");
    scanf("%s", &s);
    printf("\n");

    if (s == 'm' || s == 'M')
    {
        p = (72.7 * a) - 58;
        printf("Seu peso ideal seria: %2.f", p);
    }
    else if (s == 'f' || s == 'F')
    {
        p = (62.1 * a) - 44.7;
        printf("Seu peso ideal seria: %2.f", p);
    }
    else
    {
        printf("Sexo errado, digite F ou M maiusculo ou f ou m minusculo!");
    }

    printf("\n");
    
    return 0;
}