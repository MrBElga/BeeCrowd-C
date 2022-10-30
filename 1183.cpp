#include <stdio.h>
int main()
{
    double i=0.0, Mat[12][12];
    char vet[2];
    int j,a,b,C,p=1;
    scanf("%s", &vet);
    for(j=0;j<=11;j++)
    {
        for(a=0; a<=11; a++)
            scanf("%lf", &Mat[j][a]);
    }
    for(b=0; b<=11;b++,p++)
    {
        for(C=p; C<=11;C++)
            i+=Mat[b][C];
    }
    if(vet[0]=='S')
        printf("%.1lf\n",i);
    else if(vet[0]=='M')
    {
        i=i/66.0;
        printf("%.1lf\n",i);
    }
    return 0;
}

