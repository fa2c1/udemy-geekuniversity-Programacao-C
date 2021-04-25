#include<stdio.h>
#include<stdlib.h>

float p = 780000, g1 = 46, g2 = 32, g3 = 22, p1, p2, p3;

int main(void){

    printf("O valor estimado da premiacao foi de R$ %2.f\n\n", p);

    p1 = (p * g1) / 100; 
    p2 = (p * g2) / 100; 
    p3 = (p * g3) / 100;  

    printf("O primeiro lugar recebera R$ %2.f\n", p1);
    printf("O primeiro lugar recebera R$ %2.f\n", p2);
    printf("O primeiro lugar recebera R$ %2.f\n", p3);

    return (0);
}