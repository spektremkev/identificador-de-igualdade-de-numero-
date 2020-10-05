#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



 //Faça um programa em C que leia um número e verifique se este é igual a 100, menor que 100, maior que 100. 
 //codigo feito no dia 05/05/2020
 
int main(void)<%
					  	
   int numero;
   
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva uma valor: ");
	  scanf ("%d",&numero);
	  
	  if( numero < 100 )
	  	printf("O numero que voce digitou e %d portanto ele e menor que 100! ",numero);
	  	
		 if(( numero >= 100 ) and ( numero <= 100 ))
		 	printf("O numero que voce digitou e %d! ",numero);
	 	
			 if( numero > 100 ) 
			 	printf("O numero que voce digitou e %d e ele e maior que 100! ",numero);		 		
%>
