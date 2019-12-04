#include <stdio.h>

main() {
	int numero;
	
	printf("Informe um numero\n");
	scanf("%d", &numero);
	if(numero%2 == 0)
	  printf("PAR\n");
	else  
	  printf("IMPAR\n");
}
