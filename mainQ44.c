#include <stdio.h>
#include <stdlib.h>


main() {
	int acumulador = 0;
	int numero = 1;
	
	while(numero <= 100){
		printf("%02d ", numero);
		acumulador += numero;
		numero++;
		if(numero%10 == 0)
		  printf("\n");
	};

	printf("\n\nAcumulado: %d\n", acumulador);
	
}
