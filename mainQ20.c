#include <stdio.h>

main() {
	float valor;
	float entrada;
	float fParcela;
	int iParcela;
	
	printf("Informe o valor do bem\n");
	scanf("%f", &valor);
	
	iParcela = valor / 3;
	fParcela = iParcela;
	entrada = valor - 2*fParcela; 
	
	printf("Valor da Entrada R$ %.2f\n", entrada);
	printf("2 x de R$ %.2f\n", fParcela);
	
}
