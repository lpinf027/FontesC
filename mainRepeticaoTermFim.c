#include <stdio.h>
#include <stdlib.h>

main() {
	int numero;
	int contador;
		
	numero = 0;
	contador = 10;
	do{
		printf("%d\n", numero);
		numero++;
		contador++;
	}while(contador < 10);
}
