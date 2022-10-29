#include <stdio.h>

int main (){

int num=0,par=0,impar=0,numero,rest;

 while(num<=4)
 {

 	scanf("%d", &numero);
 	rest= numero%2;
 		if (rest==0)
 		{
 		 par++ ;
 		}
 		else
 		impar++;

 num++;
 }
 printf("%d valores pares\n",par);
 return 0;
}
