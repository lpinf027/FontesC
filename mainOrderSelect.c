#include <stdio.h>
#define TAM 12

main() {
	int vetor[] ={10, 3, 16, 0, -1, 104, 23, -7, 88, 6, 4, 1000};
	int iCont, jCont;
	int aux;
	
	for(iCont = 0; iCont < TAM; iCont++)
	  printf("%d ", vetor[iCont]);
	  
	printf("\nOrdenando...\n");  
	
	for(iCont = 0; iCont < TAM - 1; iCont++)
		for(jCont = iCont+1; jCont < TAM; jCont++)
		  if(vetor[iCont] > vetor[jCont]){
		  	aux = vetor[iCont];
		  	vetor[iCont] = vetor[jCont];
		  	vetor[jCont] = aux;
		  }
	
	for(iCont = 0; iCont < TAM; iCont++)
	  printf("%d ", vetor[iCont]);
	
	
}
