#include<stdio.h>
#include<stdlib.h>

int main(void){

    float p, a;

    printf("Tabeça de classificacao\n");
    printf("\n");

    printf("Digite o peso: ");
    scanf("%f", &p);
    printf("Digite a Altura: ");
    scanf("%f", &a);
    printf("\n");

    if (a < 1.20)
    {
        if (p < 60)
        {
            printf("classificacao A\n");
        }
        else if (p < 90)
        {
            printf("classificacao D\n");
        }
        else
        {
            printf("classificacao G\n");
        }
        
    }
    else if (a < 1.70)
    {
           if (p < 60)
        {
            printf("classificacao B\n");
        }
        else if (p < 90)
        {
            printf("classificacao E\n");
        }
        else
        {
            printf("classificacao H\n");
        }
        
    }
    else
    {
        if (p < 60)
        {
            printf("classificacao C\n");
        }
        else if (p < 90)
        {
            printf("classificacao F\n");
        }
        else
        {
            printf("classificacao I\n");
        }
        
    }
    

    return (0);
}