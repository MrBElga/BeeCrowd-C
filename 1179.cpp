#include <stdio.h>
#define TF 5
#define TF2 15
int main()
{
	int  par[TF],impar[TF],save[TF2],i,a=0,b=0,c=0,cont=0,cont2=0;
 
    for(i=0; i<TF2; i++)
    	{
        	scanf("%d", &save[i]);
        }
    for(i=0; i<TF2; i++)
    {
        if(a==5)
        {
            for(c=0; c<TF; c++)
            	{
                	printf("impar[%d] = %d\n", c, impar[c]);
            	}
            a=0;
        }
        if(b==5)
        {
            for(c=0; c<TF; c++)
            	{
                	printf("par[%d] = %d\n", c, par[c]);
                }
            b=0;
        }

        if(save[i]%2!=0)
        {
            impar[cont]=save[i];
            ++cont;
            a++;
            if(cont==5) 
            	{
					cont=0;	
				}
        }
        else
        if(save[i]%2==0)
        {
            par[cont2]=save[i];
            ++cont2;
            b++;
            if(cont2==5) 
				{          
					cont2=0;
				}
        }
    }
    for(i=0; i<cont; i++)
    	{
            printf("impar[%d] = %d\n", i, impar[i]);
    	}
    for(i=0; i<cont2; i++)
    	{
            printf("par[%d] = %d\n", i, par[i]);
        }
        return 0;
}
