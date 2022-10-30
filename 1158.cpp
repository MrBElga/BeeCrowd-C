#include <stdio.h>
int main()
{
    int N, num1, num2, a, b, c, d, e;
    scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        scanf("%d %d", &num1, &num2);
        if(num1%2==1)
        {
            c=0;
            for(b=1; b<=num2; b++)
            {
                c+=num1;
                num1+=2;
            }
            printf("%d\n", c);
        }
        else
        {
            num1++;
            c=0;
            for(b=1; b<=num2; b++)
            {
                c+=num1;
                num1+=2;
            }
            printf("%d\n", c);
        }
    }
    return 0;
}
