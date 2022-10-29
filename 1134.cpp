#include <stdio.h>
int main()
{
    int A, al=0, Gas=0, Dis=0;
    while(1)
    {
        scanf("%d", &A);
        if(A==4)
            break;
        else
        {
            if(A==1) al++;
            else 
             if(A==2) Gas++;
            else 
             if(A==3) Dis++;
           
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, Gas,Dis);
    return 0;
}
