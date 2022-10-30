#include <stdio.h>
#define VT 10
int main()
{
    int Vet[VT],i;
    for(i=0; i<VT; i++)
    {
        scanf("%d",&Vet[i]);
   	}
    for(i=0; i<VT; i++)
    {
        if(Vet[i]<=0)
            Vet[i]=1;
    }
    for(i=0; i<VT; i++)
    	{
        printf("X[%d] = %d\n",i,Vet[i]);
   		}
    return 0;
}

