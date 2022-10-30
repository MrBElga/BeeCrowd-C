#include <stdio.h>
int main()
{
    int i=0;
    double vet[100],a,c,d;
    scanf("%lf", &a);
    vet[i]=a;
    for(i=0; i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i, vet[i]);
        a/=2;
        vet[i+1]=a;
    }
    return 0;
}

