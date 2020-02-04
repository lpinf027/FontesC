#include <stdio.h>
#include <stdlib.h>


main() {
	int numero;
	int iCont;
	int divisores;
	
	printf("Informe um numero\n");
	scanf("%d", &numero);
	
	divisores = 0;
	for(iCont = 1; iCont <= numero; iCont++)
	  if(numero % iCont == 0)
	    divisores++;
	
	if(divisores == 2)
	  printf("PRIMO");
	else      
	  printf("COMPOSTO");
	    
	
	
}
