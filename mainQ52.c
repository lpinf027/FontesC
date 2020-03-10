#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int antant, ant, atual;
	int iCont;
	int qtdeElementos;
	
	printf("Informe a quantidade de elementos da sequencia\n");
	scanf("%d", &qtdeElementos);	
	
	printf("Informe o primeiro elemento da sequencia\n");
	scanf("%d", &antant);
	
	printf("Informe o segundo elemento da sequencia\n");
	scanf("%d", &ant);
	
	
	
	for(iCont = 3; iCont <= qtdeElementos; iCont++){
		if(iCont%2==1)
		  atual = ant + antant;
		else  
		  atual = ant - antant;
		printf("%d ", atual);
		antant =  ant;
		ant = atual; 
	}
	
}
