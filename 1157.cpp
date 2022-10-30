#include <stdio.h>

int main()
{
   int N,A;
    scanf("%d",&N);
    for(A=1;A<=N;A++)
    {
        if(N%A==0)
            printf("%d\n",A);
    }
    return 0;
}
