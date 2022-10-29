#include <stdio.h>
int main (){

int rest=0, cont=0;
float num;

 while (cont<=5)
 {
  
  	scanf("%f",&num);
    
		if(num>0)
		{
 			rest++;
		}
		
  	cont++;
 }
  printf("%d valores positivos\n",rest);
return 0;
}
