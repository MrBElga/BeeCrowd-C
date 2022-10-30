#include <stdio.h>
int main()
{
    int L,V,C,VS=0;
    while(scanf("%d",&L)!=EOF)
    {
        for(V=1,VS=0; V<=L; V++)
        {
            scanf("%d", &C);
            if(C>VS)
                VS=C;
        }
        if(VS<10)
            printf("1\n");
        else if(VS<20)
            printf("2\n");
        else
            printf("3\n");
    }
        return 0;
}
