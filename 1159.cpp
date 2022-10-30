#include <stdio.h>
int main()
{
    int num,val1,val2=0;
    scanf("%d", &num);
    while(num!=0)
    {
        
        val2=0;
       
        if(num%2==0)
        {
            for(val1=num; val1<=num+8; val1+=2) val2+=val1;
        }
        else
        {
            for(val1=num+1;val1<=num+9;val1+=2) val2+=val1;
        }
        printf("%d\n", val2);
        scanf("%d", &num);
    }
    return 0;
}
