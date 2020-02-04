#include <stdio.h>
#include <stdlib.h>


main() {
	
	int atual, ant, antant;
	int iCont;
	
	ant = antant = 1;
	
	printf("%d %d ", antant, ant);
	
	for(iCont = 2; iCont < 20; iCont++){
		atual = ant+ antant;
		printf("%d ", atual);
		antant = ant;
		ant = atual;
	}
	
	return 0;
}
