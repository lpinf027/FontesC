#include <stdio.h>
#include <stdlib.h>

main() {
	int numero;
	int contador;
	numero = 0;
	
	for(contador = 0; contador < 30; contador++){
		if(numero % 2 == 0)
			printf("%d\n", numero);
		numero++;
	}
}
