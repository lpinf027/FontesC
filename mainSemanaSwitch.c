#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int dia;
	
	printf("Informe o numero que representa o dia da semana:\n");
	scanf("%d", &dia);
	
	switch(dia){
	  case 1 :  printf("DOM"); break;
	  case 2 :  printf("SEG"); break;
	  case 3 :  printf("TER"); break;
	  case 4 :  printf("QUA"); break;
	  case 5 :  printf("QUI"); break;
	  case 6 :  printf("SEX"); break;
	  case 7 :  printf("SAB"); break;
	  default: printf("NENHUM"); break;
	}
}
