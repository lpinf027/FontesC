#include <stdio.h>
#define MAX_PROPOSTAS 300

main() {
	int votos[MAX_PROPOSTAS];
	
	int voto;
	int iCont;
	
	for(iCont = 0; iCont < MAX_PROPOSTAS; iCont++)
		votos[iCont] = 0;
	
	do{
		printf("Informe o numero da proposta votada\n");
		scanf("%d", &voto);
		if(voto>=0 && voto <MAX_PROPOSTAS)
	    	votos[voto]++;
	}while(voto >=0); 

	for(iCont = 0; iCont < MAX_PROPOSTAS; iCont++)
		if(votos[iCont]  > 0)	
			printf("Proposta %d: %d\n", iCont, votos[iCont]);
	
}
