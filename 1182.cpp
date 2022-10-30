#include <stdio.h>
#define TF 11
int main()
{
	int C,i,j;
    double a=0.0, M[12][12];
    char T[2];
    scanf("%d", &C);
    scanf("%s", &T);
    for(j=0;j<=TF;j++)
    {
        for(i=0; i<=TF; i++)
        {
        	scanf("%lf", &M[j][i]);
        	if(i==C)
            	a+=M[j][i];
        }
    }
    if(T[0]=='S')
    	{	
    	    printf("\n%.1lf\n",a);
    	}
    else if(T[0]=='M')
    	{
            	a=a/12.0;
        	printf("%.1lf\n",a);
    	}
    	return 0;
}

