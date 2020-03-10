#include <stdio.h>

#define QTDE_DIAS 7


main() {
	
	float indPluvios[QTDE_DIAS];
	int iCont;
	float media, maxIndPluvio, minIndPluvio;
	int indMax, indMin;
	
	for(iCont = 0; iCont< QTDE_DIAS; iCont++){
		printf("Informe a quantidade de chuvas do dia %d\n", iCont);
		scanf("%f", &indPluvios[iCont]);
	}
	
	media = 0;
	maxIndPluvio = minIndPluvio = indPluvios[0];
	indMax = indMin = 0;
	for(iCont = 0; iCont< QTDE_DIAS; iCont++){
	  media+=indPluvios[iCont];
	  if(indPluvios[iCont] > maxIndPluvio){
	  	maxIndPluvio = indPluvios[iCont];
	  	indMax = iCont;
	  }
	  if(indPluvios[iCont] < minIndPluvio){
	  	minIndPluvio = indPluvios[iCont];
	  	indMin = iCont;
	  }
	}
	media /= QTDE_DIAS;
	
	printf("Media: %.2f\n", media);   
	printf("Menor Indice: %.2f (Dia %d)\n", minIndPluvio, indMin);   
	printf("Maior Indide: %.2f (Dia %d)\n", maxIndPluvio, indMax);   	
	return 0;
}
