#include <stdio.h>
#include <stdlib.h>

main() {
	
	int chaveP, chaveQ, chaveR;
	char saida;
	
	printf("Informe a posicao das chaves P Q R\n");
	scanf("%d %d %d", &chaveP, &chaveQ, &chaveR);
	
	if(chaveP && chaveQ)
	  saida = 'A';
	else if(!chaveP && chaveQ)
	  saida = 'B';
	else if(!chaveQ && chaveR)
	  saida = 'C';
	else if(!chaveQ && !chaveR)
	  saida = 'D';
	  
	  
	printf("SAIDA: %c\n", saida);  
	
	
	
	
}
