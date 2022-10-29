#include <stdio.h>

int main (){

int num=0,rest;
float media,numero,pos=0,soma_alt;
 
while(num<=5)
 {
	
 	scanf("%f", &numero);

 		if (numero>0)
 		{
 		 soma_alt=soma_alt+numero;
 		 pos++ ;

 		}
  num++;     
 }
 media=soma_alt/pos;
 printf("%.0f valores positivos\n%.1f\n",pos,media);
}
