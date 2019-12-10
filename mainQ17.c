#include <stdio.h>

main() {
	int valor;
	int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	
	printf("Informe o valor a ser sacado: \n");
	scanf("%d", &valor);
	
	notas100 = valor / 100;
	valor %= 100; // valor = valor % 100
	
	notas50 = valor / 50;
	valor %= 50; // valor = valor % 50
	
	notas20 = valor / 20;
	valor %= 20; // valor = valor % 20
	
	notas10 = valor / 10;
	valor %= 10; // valor = valor % 10

	notas5 = valor / 5;
	valor %= 5; // valor = valor % 5
	
	notas2 = valor / 2;
	
	notas1 = valor % 2; 

    if(notas100 > 0)
		printf("Notas de 100: %d\n", notas100);
    if(notas50 > 0)
		printf("Notas de 50: %d\n", notas50);
    if(notas20 > 0)
		printf("Notas de 20: %d\n", notas20);
    if(notas10 > 0)
		printf("Notas de 10: %d\n", notas10);
    if(notas5 > 0)
		printf("Notas de 5: %d\n", notas5);
    if(notas2 > 0)
		printf("Notas de 2: %d\n", notas2);
    if(notas1 > 0)
		printf("Notas de 1: %d\n", notas1);

	
	return 0;
}
