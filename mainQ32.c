#include <stdio.h>

main() {
	char caracter;
	
	printf("Informe o caracter a ser categorizado:\n");
	scanf("%c", &caracter);
	
	if(caracter >= '0' && caracter <= '9')
	 printf("Numero\n");
	else if((caracter >= 'A' && caracter <= 'Z') ||
            (caracter >= 'a' && caracter <= 'z')){
      if((caracter == 'A') ||
	     (caracter == 'E') ||
	     (caracter == 'I') ||
	     (caracter == 'O') ||
	     (caracter == 'U') ||
		 (caracter == 'a') ||
	     (caracter == 'e') ||
	     (caracter == 'i') ||
	     (caracter == 'o') ||
	     (caracter == 'u'))
	   		printf("VOGAL");
	   else
			printf("CONSOANTE");	      		
	}else
	 printf("Simbolo\n"); 
	
}
