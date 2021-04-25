#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, n1, n2, n3, n4;

    printf("Imprimir um numeo de 4 digitos um em cada linha\n\n");
  
    printf("Digite um numero natural de 4 digitos: ");
    scanf("%d", &n);

	    n1 = n % 10;
	    n = n / 10;
	    n2 = n % 10;
	    n = n / 10;
	    n3 = n % 10;
	    n = n / 10;
	    n4 = n % 10;
  
    printf("%d\n", n4);
    printf("%d\n", n3);
    printf("%d\n", n2);
    printf("%d\n", n1);

  return 0;
}