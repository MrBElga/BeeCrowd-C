#include <stdio.h>
int main()
{
    double l=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=11;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)	
        	{
            	scanf("%lf", &M[x][y]);
            }
    }
    for(z=1; z<=11;z++)
    {
        for(C=11; C>=p;C--)
        	{
            	l+=M[z][C];
       		}
        p--;
    }
    if(T[0]=='S')
    	{
    		printf("%.1lf\n",l);
    	}
    else 
	if(T[0]=='M')
    {
        l=l	/66.0;
        printf("%.1lf\n",l);
    }
    return 0;
}
