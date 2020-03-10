#include <stdio.h>
#define TAM_VETOR 23
main() {
	int vetor[] = {5, 2, 7, 8, 9, 10, 10, 7, 5, 9,
	             6, 9, 9, 4, 3, 9, 8, 7, 4, 6, 10, 10, 10};
	             
	float media;
	float mediana;
	int moda;
	int qtdeModa;
	int iCont;
	int jCont;
	int aux;
	int atual;
	int qtdeAtual;
	
	for(iCont = 0; iCont < TAM_VETOR - 1; iCont++)
		for(jCont = iCont+1; jCont < TAM_VETOR; jCont++)
		  if(vetor[iCont] > vetor[jCont]){
		  	aux = vetor[iCont];
			vetor[iCont] = vetor[jCont];
			vetor[jCont] = aux;	
		  }
	
	for(media = 0, iCont = 0; iCont < TAM_VETOR; iCont++)
	  media+= vetor[iCont];
	media /= TAM_VETOR;
	
	if(TAM_VETOR % 2 == 0)
		mediana = (vetor[(TAM_VETOR/2) - 1] + vetor[(TAM_VETOR/2)]) / 2.0;
	else
		mediana = vetor[(TAM_VETOR/2)];


	qtdeModa = 0;
	for(iCont = 0; iCont < TAM_VETOR; iCont++){
	  atual = vetor[iCont]; 	
  	  qtdeAtual=0;
	  while(atual == vetor[iCont]){
	  	qtdeAtual++;
	  	iCont++;
	  }	
	  iCont--;
	  if(qtdeAtual > qtdeModa){
	  	qtdeModa = qtdeAtual;
	  	moda = atual;
	  }
	}
	
	for(iCont = 0; iCont < TAM_VETOR; iCont++)
	  printf("%d ", vetor[iCont]);
	printf("\n");  
	
	printf("Media: %.2f\n", media);  
	printf("Mediana: %.2f\n", mediana);  	
	printf("Moda: %d\n", moda);  		
		             
	
	
}
