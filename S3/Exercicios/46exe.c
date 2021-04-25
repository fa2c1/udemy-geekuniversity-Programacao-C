#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, n1, n2, n3;
  
    printf("Digite um numero natural de 3 digitos: ");
    scanf("%d", &n);

	    n1 = n % 10;
	    n = n / 10;
	    n2 = n % 10;
	    n = n / 10;
	    n3 = n % 10;

    printf("Numero digitado foi invertido: %d%d%d\n", n1,n2,n3);

    return 0;
}