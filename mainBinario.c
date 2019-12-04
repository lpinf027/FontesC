#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int b0, b1, b2, b3, b4, b5;
	int numDec;
	int numBin;
	int num;
	
	printf("Informe um numeral inteiro - base 10\n");
	scanf("%d", &numDec);
	
	/*b0 = numDec % 2;
	b1 = (numDec / 2) % 2;
	b2 = (numDec / 4) % 2;
	b3 = (numDec / 8) % 2;
	b4 = (numDec / 16) % 2;
	b5 = numDec / 32;*/
	
	num = numDec;
	
	b0 = num % 2;
	num = num / 2;
	b1 =  num % 2;
	num = num / 2;
	b2 = num % 2;
	num = num / 2;
	b3 = num % 2;
	num = num / 2;
	b4 = num % 2;
	b5 = num / 2;
	
	numBin = b5 * 100000 + b4 * 10000 + b3 * 1000 + b2 * 100 + b1 * 10 + b0;
	printf("(%d)10 = (%d)2\n", numDec, numBin);
	
}
