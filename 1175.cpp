#include <stdio.h>
 
int main() 
{
	int Vet[20],y,x,i;
	for(i=0;i<20;i++)
		scanf("%d",&Vet[i]);		
	for(i=0,y=19;i<10;i++,y--)
	{
		x=Vet[i];
		Vet[i]=Vet[y];
		Vet[y]=x;
	}
	
	for(i=0;i<20;i++)
		printf("N[%d] = %d\n",i,Vet[i]);
	
    return 0;
}
