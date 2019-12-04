#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int dia;
	
	printf("Informe o numero que representa o dia da semana:\n");
	scanf("%d", &dia);
	
	if(dia == 1)
	  printf("DOM");
	else if(dia == 2)
	  printf("SEG");
	else if(dia == 3)
	  printf("TER");
	else if(dia == 4)
	  printf("QUA");
	else if(dia == 5)
	  printf("QUI");
	else if(dia == 6)
	  printf("SEX");
	else if(dia == 7)
	  printf("SAB");
	else
	 printf("VALOR DO DIA SEM CORRESPONDENCIA\n");   
}
