#include <stdio.h>
#include <stdlib.h>

main(){
       
  int numero;
  int m, c, d, u;
  
  printf("Informe um numero:\n");
  scanf("%d", &numero);
  
  /* Fatoracao */
  m = numero / 1000;
  c = (numero % 1000) / 100;     
  d = (numero % 100) / 10;
  u = numero % 10;
  
  
  /* Milhar */
  switch(m){
    case 1 : printf("um "); break;          
    case 2 : printf("dois "); break;
    case 3 : printf("tres "); break;        
    case 4 : printf("quatro "); break;
    case 5 : printf("cinco "); break;        
    case 6 : printf("seis "); break;        
    case 7 : printf("sete "); break;
    case 8 : printf("oito "); break;        
    case 9 : printf("nove "); break;            
  }  
  
  if(m > 0){
    printf("mil ");
    if(c > 0)
      printf("e ");
  }  
    
  
  /* Centena */
  switch(c){
    case 1 : if(d > 0 || u > 0)
               printf("cento "); 
             else
               printf("cem ");             
             break;          
    case 2 : printf("duzentos "); break;
    case 3 : printf("trezentos "); break;        
    case 4 : printf("quatrocentos "); break;
    case 5 : printf("quinhentos "); break;        
    case 6 : printf("seiscentos "); break;        
    case 7 : printf("setecentos "); break;
    case 8 : printf("oitocentos "); break;        
    case 9 : printf("novecentos "); break;            
  }   
  
  if((m > 0 || c > 0) && d > 0)
    printf("e ");              

  /* Dezena */
  switch(d){
    case 1 : switch(u){
               case 0 : printf("dez "); break;
               case 1 : printf("onze "); break;          
               case 2 : printf("doze "); break;
               case 3 : printf("treze "); break;        
               case 4 : printf("quatorze "); break;
               case 5 : printf("quinze "); break;        
               case 6 : printf("dezesseis "); break;        
               case 7 : printf("dezessete "); break;
               case 8 : printf("dezoito "); break;        
               case 9 : printf("dezenove "); break;            
              }    
              break;          
    case 2 : printf("vinte "); break;
    case 3 : printf("trinta "); break;        
    case 4 : printf("quarenta "); break;
    case 5 : printf("cinquenta "); break;        
    case 6 : printf("sessenta "); break;        
    case 7 : printf("setenta "); break;
    case 8 : printf("oitenta "); break;        
    case 9 : printf("noventa "); break;            
  } 

  /* Unidade */
  if(d != 1){
   if((m > 0 || c > 0 || d > 0)&& u > 0)
    printf("e ");              
   switch(u){
    case 1 : printf("um "); break;          
    case 2 : printf("dois "); break;
    case 3 : printf("tres "); break;        
    case 4 : printf("quatro "); 
    case 5 : printf("cinco ");         
    case 6 : printf("seis "); break;        
    case 7 : printf("sete "); break;
    case 8 : printf("oito "); break;        
    case 9 : printf("nove "); break;            
   }
 }   
  printf("\n");
}


