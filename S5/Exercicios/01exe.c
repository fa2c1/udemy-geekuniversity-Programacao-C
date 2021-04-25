#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n = 1;

    printf("\nExibir os 5 primeiros multiplos de 3\n");
    printf("\n");

        for (int i = 0; i < 16; i++)
        {
            n = n + 1;

            if (n % 3 == 0)
            {
                {
                    printf("Numero multiplo de 3: %d \n", n);
                }
                
            }

        }    

    printf("\n");
    return (0);

}
