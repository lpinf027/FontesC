#include <stdio.h>


main() {
	int meuInteiro;
	float meuFloat;
	int resto;
	
	meuInteiro = 10;
	
	resto = meuInteiro % 3;
	meuFloat = meuInteiro / 3;
	meuInteiro = meuInteiro / 3;
	
	printf("%d\n", resto);
	printf("%f <-|-> %d", meuFloat, meuInteiro);
	
}
