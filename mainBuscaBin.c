#include <stdio.h>
#define TAM 12

main() {
	int vetor[] ={-7, -1, 0, 3, 4, 6, 10, 16, 23, 88, 104, 1000};
	int elemento;
	int inicio, meio, fim;
	int posicao;

	
	printf("Informe o elemento a ser buscado\n");
	scanf("%d", &elemento);
	posicao = -1;
	inicio = 0;
	fim = 11;
	
	while(inicio <= fim && posicao == -1){
		meio = ((fim-inicio)/2) + inicio;
		if(vetor[meio] == elemento)
		  posicao = meio;
		else if(vetor[meio] < elemento)
		  inicio = meio + 1;
		else
		  fim = meio -1;     
	}
	
	printf("Posicao: %d\n", posicao);
	
	
}
