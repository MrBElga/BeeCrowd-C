#include <stdio.h>
int main()
{
    
    int i, c=0, j,a, b;
    double ac, bc;
    scanf("%d", &j);
    for(i=1; i<=j; i++)
    {
      	
        scanf("%d %d %lf %lf", &a, &b, &ac, &bc);
        while(a <= b )
        {
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
          
        }
      
        if(c<=100)
            printf("%d anos.\n", c);
        c=0;
    }
    return 0;
}
