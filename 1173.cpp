#include <stdio.h>
#define VT 10
int main()
{
    int vet[VT], i, b;
    scanf("%d", &b);
    for(i=0; i<VT; i++)
    {
        vet[i]=b;
        printf("N[%d] = %d\n",i,b);
        b*=2;
    }
    return 0;
}
