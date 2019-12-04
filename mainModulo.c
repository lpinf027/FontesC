#include <stdio.h>

main() {
	float numero;
	float modulo;
	
	printf("Informe o valor do numero:\n");
	scanf("%f", &numero);
	
	if(numero >= 0){
		modulo = numero;
	}else{
	    modulo = -numero;
	}
	
	printf("|%f| = %f\n", numero, modulo);			
}
