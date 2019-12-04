#include <stdio.h>

main() {
	float numero;
	
	printf("Informe um numero\n");
	scanf("%f", &numero);
	
	if(numero > 0)
	  printf("POSITIVO");
	else if(numero == 0)
	  printf("ZERO");
	else  
	  printf("NEGATIVO");
	
	
}
