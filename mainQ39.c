#include <stdio.h>
#include <stdlib.h>

main() {
	
	int agencia;
	int m, c, d, u;
	int iDV;
	char dv;
	
	printf("Informe o numero da agencia:\n");
	scanf("%d", &agencia);
	
	m = agencia / 1000;
	c = (agencia % 1000) / 100;
	d = (agencia % 100) / 10;
	u = (agencia % 10);
	
	iDV = 11 - ((m*5 + c*4 + d*3 + u*2) % 11);
	
	if(iDV == 10)
	  dv = 'X';
	else if(iDV == 11)
	  dv = '0';
	else
	  dv = iDV + '0';  
	  
	printf("%04d-%c\n", agencia, dv);
	
}
