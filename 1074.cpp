#include <stdio.h>
int main() {
    int X,N;
    scanf("%d",&X);
    while(X--)
    {
        scanf("%d",&N);
        if(N<0)
        {
            if(N%2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else if(N>0)
        {
            if(N%2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else
            printf("NULL\n");
    }
    return 0;
}
