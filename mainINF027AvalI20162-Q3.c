#include <stdio.h>
#include <stdlib.h>

main() {
	
	float peso1, peso2;
	float comprimento1, comprimento2;
	float relacao1, relacao2;
	
	printf("Informe o comprimento do primeiro braco da gangorra\n");
	scanf("%f", &comprimento1);
	printf("Informe o comprimento do segundo braco da gangorra\n");
	scanf("%f", &comprimento2);
	
	printf("Informe o peso da crianca sentada no primeiro braco da gangorra\n");
	scanf("%f", &peso1);
	printf("Informe o peso da crianca sentada no segundo braco da gangorra\n");
	scanf("%f", &peso2);
	
	relacao1 = comprimento1 * peso1;
	relacao2 = comprimento2 * peso2;
	
	if(relacao1 == relacao2)
	  printf("EQUILIBRIO\n");
	else if(relacao1 > relacao2)
	  printf("PENDE PARA O PRIMEIRO BRACO\n");
	else
	 printf("PENDE PARA O SEGUNDO BRACO\n");
	   
	
	
	
	
	
	
	
}
