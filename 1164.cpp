#include <stdio.h>
int main()
{
    int i, num, a, b, c, d=0;
    scanf("%d", &i);
    for(a=1; a<=i; a++)
    {
        scanf("%d", &num);
        c=num/2; d=0;
        for(b=1; b<=c; b++)
        {
            if(num%b==0)
                d+=b;
        }
        if(d==num)
            printf("%d eh perfeito\n",num);
        else
            printf("%d nao eh perfeito\n",num);
    }
    return 0;
}
