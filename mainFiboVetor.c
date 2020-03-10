#include <stdio.h>
#define TAM 40


main() {
	
	int fibo[TAM];
	int iCont;
	
	fibo[0] = fibo[1] = 1;
	
	for(iCont = 2; iCont < TAM; iCont++)
		fibo[iCont] = fibo[iCont - 1] + fibo[iCont - 2];

	for(iCont = 0; iCont < TAM; iCont++)
	  printf("%d ", fibo[iCont]);
 
	
}
