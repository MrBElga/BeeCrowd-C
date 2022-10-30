#include <stdio.h>
int main()
{
    int Vet[1000], x, i,a;
    scanf ("%d", &x);
    for(i=0,a=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,a);
        a++;
        if(a==x)
            a=0;
    }
    return 0;
}
