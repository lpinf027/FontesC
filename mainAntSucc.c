#include <stdio.h>

main() {
	int numero;
	int ant;
	int succ;
	
	printf("Informe um numero\n");
	scanf("%d", &numero);
	
	ant = numero - 1;
	succ = numero + 1;	
	
	printf("Antecessor: %d\n", ant);
	printf("Sucessor: %d\n", succ);
	
}

