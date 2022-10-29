#include <stdio.h>
int main()
{
    int M,N,c,d;
    d=0;
    while(1)
    {
        scanf("%d %d", &M, &N);
        if(M<=0 || N<=0)
        	break;
        else
        {
            d=0;
            if(M<N)
            {
                for(c=M; c<=N; c++)
                {
                    printf("%d ",c);
                    d+=c;
                }
                printf("Sum=%d\n",d);
            }
            else if(M>N)
            {
                for(c=N; c<=M; c++)
                {
                    printf("%d ",c);
                    d+=c;
                }
                printf("Sum=%d\n",d);
            }
        }
    }
    return 0;
}

