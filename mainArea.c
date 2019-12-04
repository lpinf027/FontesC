#include <stdio.h>

main() {
	float base;
	float altura;
	float area;
	float perimetro;
	
	printf("Entre com a base do retangulo:\n");
	scanf("%f", &base);
	printf("Entre com a altura do retangulo:\n");
	scanf("%f", &altura);
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	printf("Valor da area: %.2f\n", area);
	printf("Valor do perimetro: %.2f\n", perimetro);
}
