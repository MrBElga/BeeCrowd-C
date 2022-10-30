#include <stdio.h>
int main()
{
    int num, num2, i, c=0;
    scanf("%d", &num);
    for(i=0; i<5; i++)
    {
        scanf("%d", &num2);
        if(num2==num) 
			c++;
    }
    printf("%d\n", c);
    return 0;
}
