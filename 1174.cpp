#include <stdio.h>
#define TF 10
int main(){
	
	int i;
    double A[100];  
    
    for(i=0; i<=99; i++)
    	{
        	scanf("%lf", &A[i]);
    	}
    for(i=0; i<=99; i++)
    {
        if(A[i]<=TF)
        {
           printf("A[%d] = %.1lf\n",i, A[i]);
    	}
    }
    return 0;
}
