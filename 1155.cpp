#include <stdio.h>
int main()
{
    double i,a, S=0;
    for(i=1;i<=100;i++)
    {
     	a=1/i;
        S+=a;
    }
    printf("%.2lf\n",S);
    return 0;
}
