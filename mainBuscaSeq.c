#include <stdio.h>
#define TAM 12

main() {
	int vetor[] ={10, 3, 16, 0, -1, 104, 23, -7, 88, 6, 4, 1000};
	int elemento;
	int posicao;
	int iCont;
	
	printf("Informe o elemento a ser buscado\n");
	scanf("%d", &elemento);
	
	posicao = -1;
	for(iCont = 0; iCont < TAM && posicao == -1; iCont++)
	  if(vetor[iCont] == elemento)
	  	posicao = iCont; 	
	
	printf("Posicao: %d\n", posicao);
	
	
}
