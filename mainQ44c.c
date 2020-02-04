#include <stdio.h>
#include <stdlib.h>


main() {
	int acumulador;
	int numero = 1;
	
	
	for(numero = 1, acumulador = 0; numero <= 100; acumulador += numero, numero++)
		printf("%02d ", numero);
	
	printf("\n\nAcumulado: %d\n", acumulador);
	
}
