#include <stdio.h>
#include <stdlib.h>

main() {
	
	int dividendo, divisor, quociente;
	
	
	printf("Informe o valor de A e B na expressao A/B\n");
	scanf("%d %d", &dividendo, &divisor);
	
	quociente = 0;
	
	while(dividendo >= divisor){
		dividendo -= divisor; // dividendo = dividendo - divisor;
		quociente++;	
	}
	printf("Quociente: %d \n", quociente);
	printf("Resto: %d \n", dividendo);
	
	
	
}
