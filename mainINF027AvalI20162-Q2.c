#include <stdio.h>

main() {
	
	int apostado;
	int sorteado;
	float valorAposta;
	int multiplicador = 0;
	float premio;
	int dezenaSorteada;
	int dezenaApostada;
	int grupoSorteado;
	int grupoApostado;
	
	printf("Informe o numero apostado\n");
	scanf("%d", &apostado);
	printf("Informe o valor da aposta\n");
	scanf("%f", &valorAposta);
	printf("Informe o numero sorteado\n");
	scanf("%d", &sorteado);
	
	dezenaSorteada = sorteado % 100;
	dezenaApostada = apostado % 100;
	
	if (dezenaSorteada == 00)
	  dezenaSorteada = 100;
	if (dezenaApostada == 00)
	  dezenaApostada = 100;
	grupoSorteado = ((dezenaSorteada - 1) / 4) + 1; 
	grupoApostado = ((dezenaApostada - 1) / 4) + 1;
	
	if(apostado % 10000 == sorteado % 10000)
		multiplicador = 3000;  
	else if(apostado % 1000 == sorteado % 1000)
		multiplicador = 500;  
	else if(apostado % 100 == sorteado % 100)
		multiplicador = 50;  
	else if(grupoSorteado == grupoApostado)
		multiplicador = 16;  	
	
	premio = valorAposta * multiplicador;
	
	printf("Grupo Sorteado: %d\n", grupoSorteado);
	printf("Grupo Apostado: %d\n", grupoApostado);	
	printf("Premio: %.2f", premio);
	
	
}
