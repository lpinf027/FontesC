#include <stdio.h>
#include <stdlib.h>


main() {
	int numero;
	int iCont;
	int fat;
	
	printf("Informe o numero\n");
	scanf("%d", &numero);

	fat = 1;
	for(iCont = 1; iCont <= numero; iCont++)
	  fat *= iCont;
	
	
	printf("%d! = %d", numero, fat);
	
}
