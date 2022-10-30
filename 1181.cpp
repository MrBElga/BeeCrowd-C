#include <stdio.h>
int main()
{
    double a=0.0, Mat[12][12];
    char vet[2];
    int C,i,j;
    scanf("%d", &C);
    scanf("%s", &vet);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
        {
        scanf("%lf", &Mat[i][j]);
        if(i==C)
            a+=Mat[i][j];
        }
    }
    if(vet[0]=='S')
        printf("%.1lf\n",a);
    else if(vet[0]=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;
}

