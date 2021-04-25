#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int a;
bool b;
 
void main()
{
	printf("Verificacao de ano Bissesxto\n\n");
	printf("Digite o ano: ");
	scanf("%d", &a);
    printf("\n");
 
	if (a % 400 == 0)
    {
		b = true;		
	}
	else if (a % 4 == 0 && a % 100 != 0)
    {
		b = true;		
	}
	else
    {
		b = false;
	}
 
	if (b == true)
    {
		printf("%d e ano Bissexto!", a);
	} else
    {
		printf("%d nao e Bissexto!", a);
	}

    printf("\n");

    return 0;
}