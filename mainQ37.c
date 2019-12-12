#include <stdio.h>

main() {
	
	int tipo;
	float valorTipo;
	float valorBruto;
	float area;
	float valorFinal;
	
	
	printf("Informe a area a ser pulverizada\n");
	scanf("%f", &area);
	
	printf("Informe o tipo de praga\n");
	printf("[1] - Ervas Daninhas\n");
	printf("[2] - Gafanhotos\n");
	printf("[3] - Brocas\n");
	printf("[4] - Todos\n");	
	scanf("%d", &tipo);
	
	switch(tipo){
		case 1 : valorTipo = 50;break;
		case 2 : valorTipo = 100; break;
		case 3 : valorTipo = 150; break;
		case 4 : valorTipo = 250; break;
	}
	
	valorBruto = valorTipo * area;
	
	if(area > 1000)
		valorFinal = valorBruto * 0.95;
	
	if(valorFinal > 750)
	   valorFinal -= ((valorFinal - 750) * 0.1);
	
	printf("Valor sem Desconto: %.2f\n", valorBruto);
	printf("Valor com Desconto: %.2f\n", valorFinal);
	
}
